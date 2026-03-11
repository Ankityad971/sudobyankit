#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int ARR[100];
    
    for (int I = 0; I < N; I++) {
        cin >> ARR[I];
    }

    int MAX = ARR[0];
    for (int I = 1; I < N; I++) {
        if (ARR[I] > MAX) {
            MAX = ARR[I];
        }
    }

    cout << MAX << endl;

    return 0;
}
