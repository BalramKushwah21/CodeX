#include <opencv2/opencv.hpp>
#include <opencv2/dnn.hpp>
#include <iostream>
#include <map>

using namespace cv;
using namespace dnn;
using namespace std;

// Emotion labels (as per the model)
const vector<string> EMOTIONS = {
    "Angry", "Disgust", "Fear", "Happy", "Sad", "Surprise", "Neutral"
};

int main() {
    // Load face detector (Haar cascade)
    CascadeClassifier face_cascade("haarcascade_frontalface_default.xml");
    if (face_cascade.empty()) {
        cerr << "Error loading face cascade\n";
        return -1;
    }

    // Load emotion recognition model
    Net net = readNetFromONNX("emotion-ferplus-8.onnx");  // Or your model path
    if (net.empty()) {
        cerr << "Error loading emotion model\n";
        return -1;
    }

    // Open camera
    VideoCapture cap(0);
    if (!cap.isOpened()) {
        cerr << "Camera could not be opened!\n";
        return -1;
    }

    Mat frame;
    while (cap.read(frame)) {
        Mat gray;
        cvtColor(frame, gray, COLOR_BGR2GRAY);

        vector<Rect> faces;
        face_cascade.detectMultiScale(gray, faces, 1.3, 5);

        for (Rect face : faces) {
            Mat faceROI = gray(face);
            resize(faceROI, faceROI, Size(64, 64));
            faceROI.convertTo(faceROI, CV_32F, 1.0/255);

            // Prepare blob
            Mat blob = blobFromImage(faceROI, 1.0, Size(64, 64), Scalar(0), false, false);
            net.setInput(blob);
            Mat prob = net.forward();

            Point classIdPoint;
            double confidence;
            minMaxLoc(prob.reshape(1,1), 0, &confidence, 0, &classIdPoint);

            int emotion_id = classIdPoint.x;
            string label = EMOTIONS[emotion_id];

            // Draw result
            rectangle(frame, face, Scalar(255, 0, 0), 2);
            putText(frame, label, Point(face.x, face.y - 10),
                    FONT_HERSHEY_SIMPLEX, 0.9, Scalar(0, 255, 0), 2);
        }

        imshow("Emotion Detector", frame);
        if (waitKey(1) == 'q') break;
    }

    cap.release();
    destroyAllWindows();
    return 0;
}
