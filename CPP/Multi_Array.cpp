#include <iostream>
#include <string>
using namespace std;

int main() {
    int rows, cols;

    // Asking user for the number of rows and columns
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    // Declaring a 2D array of strings
    string arr[rows][cols];

    // Taking input for each element in the 2D array
    cout << "Enter the elements of the 2D array:\n";
    for (int i =0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            cout << "Enter element at position (" << i + 1 << ", " << j + 1 << "): ";
            cin >> arr[i][j];
        }
    }

    // Displaying the 2D array
    cout << "\nThe entered 2D array is:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}

