#include <iostream>
using namespace std;

int main() {
    int row;
    cout << "Enter number of rows: ";
    cin >> row;

    int **arr = new int *[row];
    int *cols = new int[row]; // Array to store the number of columns for each row

    // Taking input
    for (int i = 0; i < row; i++) {
        cout << "Enter number of columns for row " << i + 1 << ": ";
        cin >> cols[i];
        arr[i] = new int[cols[i]];

        // Taking input for each element in the row
        cout << "Enter elements for row " << i + 1 << ": ";
        for (int j = 0; j < cols[i]; j++) {
            cin >> arr[i][j];
        }
    }

    // Display the jagged array
    cout << "\nThe jagged array is:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < cols[i]; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocate the memory
    for (int i = 0; i < row; i++) {
        delete[] arr[i];
    }
    delete[] arr;
    delete[] cols;

    return 0;
}
