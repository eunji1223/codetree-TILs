#include <iostream>
#include <string>
using namespace std;

void TwoMore(string &a){
    for(int i=1; i<a.length(); i++){
        if(a[0] != a[i]){
            cout << "Yes" << endl;
            return;
        }
    }
    cout << "No" << endl;
}

int main() {
    string a;
    cin >> a;

    TwoMore(a);

    return 0;
}