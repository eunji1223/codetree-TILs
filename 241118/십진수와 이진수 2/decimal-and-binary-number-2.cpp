#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;

    int num = 0;
    for(int i=0; i<n.length(); i++){
        int binary = n[i] - '0';
        num = num * 2 + binary;
    }
    num *= 17;

    int digits[20];
    int cnt = 0;
    while(true){
        if(num<2){
            digits[cnt] = num;
            cnt++;
            break;
        }
        digits[cnt] = num%2;
        num /= 2;
        cnt++;
    }

    for(int i=cnt-1; i>=0; i--){
        cout << digits[i];
    }

    return 0;
}