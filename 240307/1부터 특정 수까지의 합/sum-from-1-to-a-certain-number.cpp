#include <iostream>
using namespace std;

int result(int n){
    int sum=0;
    for(int i=1; i<n+1; i++){
        sum+=i;
    }
    return sum/10;
}

int main() {
    int n;
    cin >> n;
    cout << result(n);
    return 0;
}