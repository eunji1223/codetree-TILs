#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int block[n] = { 0,};
    for(int i=0; i<k; i++){
        int a, b;
        cin >> a >> b;
        for(int j=a; j<=b; j++){
            block[j] += 1;
        }
    }

    cout << *max_element(block, block+n);

    return 0;
}