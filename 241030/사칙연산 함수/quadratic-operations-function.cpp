#include <iostream>
#include <string>
#include <list>
using namespace std;

int main() {
    int a, c;
    char o;
    int result = -1;

    cin >> a >> o >> c;

    switch(o){
        case '+':
            result = a + c;
            break;
        case '-':
            result = a - c;
            break;
        case '/':
            result = a / c;
            break;
        case '*':
            result = a * c;
            break;
        default:
            cout << "False" << endl;
            return 0;
    }

    cout << a << " " << o << " " << c << " = " << result << endl;



    return 0;
}