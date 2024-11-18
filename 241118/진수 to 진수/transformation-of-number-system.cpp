#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b;
    string n;
    cin >> a >> b >> n;

    int num = 0;
    for(int i=0; i<n.length(); i++){
        int binary = n[i] - '0';
        num = num * a + binary;
    }

    int digits[20];
    int cnt = 0;
    while(true){
        if(num < b){
            digits[cnt] = num;
            cnt++;
            break;
        }
        digits[cnt] = num%b;
        num /= b;
        cnt++;
    }

    for(int i=cnt-1; i>=0; i--){
        cout << digits[i];
    }
    return 0;
}