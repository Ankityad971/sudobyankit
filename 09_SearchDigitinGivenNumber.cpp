#include <iostream>
using namespace std;

int main() {
    int N, TEMP, DIGIT, SEARCH;
    bool FOUND = false;

    cin >> N;
    cin >> SEARCH;

    TEMP = N;
    while (TEMP > 0) {
        DIGIT = TEMP % 10;
        if (DIGIT == SEARCH) {
            FOUND = true;
            break;
        }
        TEMP /= 10;
    }

    if (FOUND)
        cout << "Digit Found" << endl;
    else
        cout << "Digit Not Found" << endl;

    return 0;
}
