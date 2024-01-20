#include <iostream>
using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    if(b > a){
        int temp = a;
        a = b;
        b = temp;
    }
    cout << a-b;
    return 0;
}