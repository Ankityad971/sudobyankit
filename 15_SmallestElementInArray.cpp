#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int ARR[100];

    for (int I = 0; I < N; I++) {
        cin >> ARR[I];
    }

    int MIN = ARR[0];
    for (int I = 1; I < N; I++) {
        if (ARR[I] < MIN) {
            MIN = ARR[I];
        }
    }

    cout << MIN << endl;

    return 0;
}
