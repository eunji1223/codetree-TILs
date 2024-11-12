#include <iostream>
using namespace std;

void printStar(int n){
    if(n==0){
        return;
    }
    for(int i=0; i<n; i++){
        cout << "*" << " ";
    }
    cout << endl;
    printStar(n-1);
    for(int i=0; i<n; i++){
        cout << "*" << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    printStar(n);
    return 0;
}