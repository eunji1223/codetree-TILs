#include <iostream>
using namespace std;

void change(int &a, int &b){
    if(a>b){
        a+=25;
        b*=2;
    }
    else{
        b+=25;
        a*=2;
    }
}

int main() {
    int a, b;
    cin >> a >> b;

    change(a, b);

    cout << a << " " << b;

    return 0;
}