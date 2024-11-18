#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[200] = { 0, };
    int offset = 100;
    for(int i=0; i<n; i++){
        int x1, x2;
        cin >> x1 >> x2;
        x1 += offset;
        x2 += offset;
        for(int i=x1; i<x2; i++){
            arr[i] += 1;
        }
    }

    cout << *max_element(arr+offset, arr+200);
    
    return 0;
}