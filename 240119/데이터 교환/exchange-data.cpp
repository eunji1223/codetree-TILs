#include <iostream>
using namespace std;
int main() {
    int a = 5;
    int b = 6;
    int c = 7;

    int temp = b;
    b = a;
    a = c;
    c = temp;

    cout << a << endl;
    cout << b << endl;
    cout << c;
    return 0;
}