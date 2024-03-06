#include <iostream>
using namespace std;

int GCD(int n, int m){
    int min;
    int max = 0;

    if(n>m){
        min = m;
    }
    else{
        min = n;
    }
    for(int i=1; i<=min; i++){
        if(n%i==0 && m%i==0){
            max = i;
        }
    }
    return max;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << GCD(n, m);
}