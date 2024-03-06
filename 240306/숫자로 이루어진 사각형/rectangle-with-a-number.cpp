#include <iostream>
using namespace std;

void makeSquare(int n){
    int count = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(count > 9){
                count = 1;
            }
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    makeSquare(n);
}