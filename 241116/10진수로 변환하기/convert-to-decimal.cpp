#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;

    int num = 0;
    for(int i=0; i<n.length(); i++){
        int binary = n[i] - '0';
        num = num * 2 + binary;
    }

    cout << num;
    return 0;
}