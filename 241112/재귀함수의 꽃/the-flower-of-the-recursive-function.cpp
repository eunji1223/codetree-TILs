#include <iostream>
using namespace std;

void DecreaseIncrease(int n){
    if(n==0){
        return;
    }
    cout << n << " ";
    DecreaseIncrease(n-1);
    cout << n << " ";
}

int main() {
    int n;
    cin >> n;
    DecreaseIncrease(n);
    return 0;
}