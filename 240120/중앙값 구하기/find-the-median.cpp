#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    
    cin >> a >> b >> c;

    if(a>b){ // a > b
        if(a>c){
            if(b>c){
                cout << b;
            }
            else{
                cout << c;
            }
        }
        else{
           cout << a; 
        }
    }
    else{ // b > a
        if(b>c){ // b > c > a
            cout << c;
        }
        else{ // c > b > a
            cout << b;
        }
    }
    return 0;
}