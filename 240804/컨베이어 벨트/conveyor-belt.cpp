#include <iostream>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    int arr[2][n];
    for(int i=0; i<n; i++){
        cin >> arr[0][i];
    }
    for(int j=0; j<n; j++){
        cin >> arr[1][j];
    }

    for(int k=0; k<t; k++){
        int temp1 = arr[0][n-1];
        for(int h=n-1; h>=1; h--){
            arr[0][h] = arr[0][h-1];
        }

        int temp2 = arr[1][n-1];
        for(int l=n-1; l>=1; l--){
            arr[1][l] = arr[1][l-1];
        }

        arr[0][0] = temp2;
        arr[1][0] = temp1;
    }

    for(int i=0; i<2; i++){
        for(int j=0; j<n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}