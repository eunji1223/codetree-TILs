#include <iostream>
using namespace std;

int n, m;
int sum;

void SumOfPart(int arr[], int a1, int a2){
    sum = 0;
    for(int i=(a1-1); i<a2; i++){
        sum += arr[i];
    }
}

int main() {
    cin >> n >> m;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<m; i++){
        int a1, a2;
        cin >> a1 >> a2;
        SumOfPart(arr, a1, a2);
        cout << sum << endl;
    }
    return 0;
}