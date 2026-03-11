

#include <iostream>
using namespace std;

int main() {
    double R, AREA, CIRCUMFERENCE;
    const double PI = 3.14159;

    cin >> R;

    AREA = PI * R * R;
    CIRCUMFERENCE = 2 * PI * R;

    cout << "Area: " << AREA << endl;
    cout << "Circumference: " << CIRCUMFERENCE << endl;

    return 0;
}
