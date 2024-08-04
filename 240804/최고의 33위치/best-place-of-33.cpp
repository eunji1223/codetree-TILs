#include <iostream>
#include <algorithm>
using namespace std;

int arr[20][20];
int n;

int GetNumOfGold(int row, int col){
    int cnt=0;
    for(int i=row; i<=row+2; i++){
        for(int j=col; j<=col+2; j++){
            if(arr[i][j]==1)
                cnt++;
        }
    }
    return cnt;
}

int main() {
    int max_gold=0;
    cin >> n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    for(int row=0; row<n; row++){
        for(int col=0; col<n; col++){
            if(col + 2 > n || row + 2 > n)
                continue;
            int num_of_gold = GetNumOfGold(row, col);
            max_gold=max(max_gold, num_of_gold);
        }
    }

    cout << max_gold;

    return 0;
}