#include <iostream>
using namespace std;

int main() {
    int N, TEMP, DIGIT, SUM = 0;
    cin >> N;

    TEMP = N;
    while (TEMP > 0) {
        DIGIT = TEMP % 10;
        SUM += DIGIT * DIGIT * DIGIT;
        TEMP /= 10;
    }

    if (SUM == N)
        cout << "Armstrong Number" << endl;
    else
        cout << "Not Armstrong Number" << endl;

    return 0;
}
