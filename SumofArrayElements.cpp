#include <iostream>
using namespace std;

int main() {
    int N, SUM = 0;
    cin >> N;
    int ARR[100];
    
    for (int I = 0; I < N; I++) {
        cin >> ARR[I];
    }

    for (int I = 0; I < N; I++) {
        SUM += ARR[I];
    }

    cout << SUM << endl;
    return 0;
}
