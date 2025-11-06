#include<iostream>
#include<climits>
using namespace std;

int main() {
    int arr[3][2];

    // Input elements in the matrix
    cout << "Enter elements of the 3x2 matrix:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            cin >> arr[i][j];
        }
    }

    // Initialize the transposed matrix with appropriate dimensions (2x3)
    int transpose[2][3];

    // Transpose the matrix
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            transpose[j][i] = arr[i][j];
        }
    }

    // Output the transposed matrix
    cout << "Transposed matrix is:" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
