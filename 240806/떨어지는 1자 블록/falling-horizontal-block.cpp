#include <iostream>
using namespace std;

#define MaxGrid 100

int arr[MaxGrid][MaxGrid];

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    k--;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    bool isEnd = false;
    int row = 0;
    while(true){
        for(int i=0; i<m; i++){
            if(arr[row+1][k+i] == 1){
                isEnd = true;
            }
        }
        if(isEnd == true)
            break;
        else
            row++;
    }

    for(int i=0; i<m; i++){
        arr[row][k+i] = 1;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }



    return 0;
}