#include <iostream>
using namespace std;

int min(int a, int b, int c){
    if(a>b){
        if(b>c){
            return c;
        }
        else{
            return b;
        }
    }
    else{
        if(a>c){
            return c;
        }
        else{
            return a;
        }
    }
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << min(a,b,c);
    return 0;
}