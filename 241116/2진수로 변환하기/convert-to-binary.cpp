#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int digit[20] = {};
    int cnt = 0;

    while(true){
        if(n<2){
            digit[cnt] = n;
            cnt++;
            break;
        }
        digit[cnt] = n%2;
        n/=2;
        cnt++;
    }

    for(int i=cnt-1; i>=0; i--){
        cout << digit[i];
    }
    return 0;
}