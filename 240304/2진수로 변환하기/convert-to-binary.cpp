#include <iostream>
using namespace std;

int main() {
    int n;
    int count = 0;
    int digit[20];

    cin >> n;

    while(true){
        if(n<2){
            digit[count++]=n;
            break;
        }
        digit[count++] = n%2;
        n/=2;    
    }    

    for(int i=count-1; i>=0; i--){
        cout << digit[i];
    }
    return 0;
}