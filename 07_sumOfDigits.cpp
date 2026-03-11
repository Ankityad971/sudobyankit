#include <iostream>
using namespace std;

int main() {
    int N, TEMP, DIGIT, SUM = 0;
    cin >> N;

    TEMP = N;
    while (TEMP > 0) {
        DIGIT = TEMP % 10;
        SUM += DIGIT;
        TEMP /= 10;
    }

    cout << SUM << endl;
    return 0;
}
