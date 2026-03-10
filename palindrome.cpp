#include <iostream>
using namespace std;

int main() {
    int x;
    int temp;
    int r;
    int result = 0;

    cin >> x;
    temp = x;

    while (x > 0) {
        r = x % 10;
        result = result * 10 + r;
        x = x / 10;
    }

    if (temp == result) {
        cout << "PALINDROME";
    } else {
        cout << "NOT PALINDROME";
    }

    return 0;
}
