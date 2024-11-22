#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int max = 0, count = 0;
    for(int i=0; i<n; i++){
        count++;
        if(i==(n-1) ||arr[i] >= arr[i+1]){
            if(count > max){
                max = count;
            }
            count = 0;
        }
    }

    cout << max;
    return 0;
}