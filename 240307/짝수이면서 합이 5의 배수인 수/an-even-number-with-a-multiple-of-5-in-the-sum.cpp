#include <iostream>
using namespace std;

bool isSumFive(int n){
    return (((n/10 + n%10)%10) == 0);
}

bool isEven(int n){
    return n%2==0;
}

int main() {
    int n;
    cin >> n;
    if(isSumFive(n) && isEven(n)){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}