import cv2
from deepface import DeepFace

def detect_emotion():
    # Start the webcam
    cap = cv2.VideoCapture(0)
    print("Starting camera... Press 'q' to quit.")

    while True:
        ret, frame = cap.read()
        if not ret:
            print("Failed to grab frame.")
            break

        try:
            # Analyze the frame for emotion
            result = DeepFace.analyze(frame, actions=['emotion'], enforce_detection=False)
            dominant_emotion = result[0]['dominant_emotion']

            # Display the emotion on the frame
            cv2.putText(frame, f'Emotion: {dominant_emotion}', (50, 50),
                        cv2.FONT_HERSHEY_SIMPLEX, 1, (0, 255, 0), 2)

        except Exception as e:
            print(f"Error: {e}")

        # Show the video feed
        cv2.imshow('Emotion Detector', frame)

        # Break on pressing 'q'
        if cv2.waitKey(1) & 0xFF == ord('q'):
            break

    # Release resources
    cap.release()
    cv2.destroyAllWindows()

if __name__ == "__main__":
    detect_emotion()
