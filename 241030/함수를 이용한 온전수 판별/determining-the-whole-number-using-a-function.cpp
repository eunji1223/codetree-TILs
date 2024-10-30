#include <iostream>
using namespace std;

int main() {
    int a, b;
    int count = 0;
    cin >> a >> b;

    for(int i=a; i<=b; i++){
        if(i%2!=0 && i%5!=0 && i%3!=0 || i%2!=0 && i%5!=0 && i%3==0 && i%9==0 ){
            count++;
        }
    }

    cout << count;

    return 0;
}