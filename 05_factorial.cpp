#include <iostream>
using namespace std;

int main() {
    int N, FACTORIAL = 1;
    cin >> N;
    
    for (int I = 1; I <= N; I++) {
        FACTORIAL *= I;
    }

    cout << FACTORIAL << endl;
    return 0;
}
