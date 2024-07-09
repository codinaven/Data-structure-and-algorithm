#include <iostream>
#include <limits.h>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j] == target) {
                return true;
            }
        }
    }
    return false;
}

void printSum(int arr[][4], int row, int col) {
    for (int i = 0; i < row; i++) {
        int sum = 0;
        for (int j = 0; j < col; j++) {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
    cout << endl;
}

int largestRowSum(int arr[][4], int row, int col) {
    int maxi = INT_MIN;
    for (int i = 0; i <row; i++) {
        int sum = 0;
        for (int j = 0; j < col; j++) {
            sum += arr[i][j];
        }
        if (sum > maxi) {
            maxi = sum;
        }
    }
    return maxi;
}

int main() {
    int arr[3][4];

    // Taking input for the 2D array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }

    // Output the values in the array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Enter the element to search: ";
    int target;
    cin >> target;
    if (isPresent(arr, target, 3, 4)) {
        cout << "Element is found" << endl;
    }
    else {
        cout << "Element is not found" << endl;
    }
    
    cout << "Sum of each row: ";
    printSum(arr, 3, 4);

    cout << "Largest sum of a row: " << largestRowSum(arr, 3, 4) << endl;

    return 0;
}
