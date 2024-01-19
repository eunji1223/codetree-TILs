#include <iostream>
using namespace std;

int main() {
    float ft = 30.48;
    float input;
    
    cout << fixed;
    cout.precision(1);

    cin >> input;
    cout << ft*input;
    return 0;
}