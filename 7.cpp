#include <iostream>
using namespace std;

void addMatrix(int A[][10], int B[][10], int C[][10], int r, int c) {
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            C[i][j] = A[i][j] + B[i][j];
}

int main() {
    int r, c;
    cout << "Enter rows & columns (<=10): ";
    cin >> r >> c;

    int A[10][10], B[10][10], C[10][10];

    cout << "Enter Matrix A:\n";
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> A[i][j];

    cout << "Enter Matrix B:\n";
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> B[i][j];

    addMatrix(A, B, C, r, c);

    cout << "Sum Matrix:\n";
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }

    return 0;
}
