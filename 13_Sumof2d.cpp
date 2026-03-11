#include <iostream>
using namespace std;

int main() {
    int ROWS, COLS, SUM = 0;
    cin >> ROWS >> COLS;

    int ARR[100][100];

    for (int I = 0; I < ROWS; I++) {
        for (int J = 0; J < COLS; J++) {
            cin >> ARR[I][J];
        }
    }

    for (int I = 0; I < ROWS; I++) {
        for (int J = 0; J < COLS; J++) {
            SUM += ARR[I][J];
        }
    }

    cout << SUM << endl;

    return 0;
}
