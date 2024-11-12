#include <iostream>
using namespace std;

void Print(int n){
    if(n==0){
        return;
    }
    Print(n-1);
    cout << n << " ";
}

void InversePrint(int n){
    if(n==0){
        return;
    }
    cout << n << " ";
    InversePrint(n-1);
}

int main() {
    int n;
    cin >> n;
    
    Print(n);
    cout << endl;
    InversePrint(n);
    return 0;
}