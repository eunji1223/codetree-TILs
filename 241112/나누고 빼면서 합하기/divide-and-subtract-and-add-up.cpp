#include <iostream>
using namespace std;

int n, m;
int sum = 0;

int MinusDivide(int arr[]){
    if(m<=1){
        return 0;
    }

    if(m%2==0){
        m/=2;
    }
    else{
        m-=1;
    }

    sum += arr[m-1];
    MinusDivide(arr);
    return 0;
}


int main() {
    cin >> n >> m;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sum = arr[m-1];
    MinusDivide(arr);
    cout << sum;

    return 0;
}