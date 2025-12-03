#include <iostream>
using namespace std;

int diagonalSum(int A[][10], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += A[i][i];
    return sum;
}

int main() {
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;

    int A[10][10];

    cout << "Enter matrix:\n";
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> A[i][j];

    cout << "Diagonal Sum = " << diagonalSum(A, n);
    return 0;
}
