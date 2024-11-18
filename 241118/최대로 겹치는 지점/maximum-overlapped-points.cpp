#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int line[100] = { 0,};
    for(int i=0; i<n; i++){
        int x1, x2;
        cin >> x1 >> x2;
        for(int j=x1; j<=x2; j++){
            line[j] += 1;
        }
    }

    cout << *max_element(line, line+100);

    return 0;
}