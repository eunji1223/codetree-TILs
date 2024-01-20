#include <iostream>
using namespace std;

int main() {
    char c;
    double a, b;

    cout << fixed;
    cout.precision(2);

    cin >> c >> a >> b;
    cout << c << endl;
    cout << a << endl;
    cout << b;
    return 0;
}