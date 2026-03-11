#include <iostream>
using namespace std;

int main() {
    int ROWS, COLS;
    cin >> ROWS >> COLS;

    int A[100][100], B[100][100], SUM[100][100];

    for (int I = 0; I < ROWS; I++) {
        for (int J = 0; J < COLS; J++) {
            cin >> A[I][J];
        }
    }

    for (int I = 0; I < ROWS; I++) {
        for (int J = 0; J < COLS; J++) {
            cin >> B[I][J];
        }
    }

    for (int I = 0; I < ROWS; I++) {
        for (int J = 0; J < COLS; J++) {
            SUM[I][J] = A[I][J] + B[I][J];
        }
    }

    for (int I = 0; I < ROWS; I++) {
        for (int J = 0; J < COLS; J++) {
            cout << SUM[I][J] << " ";
        }
        cout << endl;
    }

    return 0;
}
