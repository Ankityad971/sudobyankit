#include <iostream>
using namespace std;

int main() {
    int N, TEMP, DIGIT, SEARCH, COUNT = 0;

    cin >> N;
    cin >> SEARCH;

    TEMP = N;
    while (TEMP > 0) {
        DIGIT = TEMP % 10;
        if (DIGIT == SEARCH) {
            COUNT++;
        }
        TEMP /= 10;
    }

    cout << COUNT << endl;

    return 0;
}
