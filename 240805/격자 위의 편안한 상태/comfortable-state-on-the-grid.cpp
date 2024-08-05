#include <iostream>
using namespace std;

#define MAX_GRID 100

int n, m;
int arr[MAX_GRID][MAX_GRID] = {0,};
int dx[4] = { 1, 0, -1, 0};
int dy[4] = { 0, -1, 0, 1};

int CheckComfortableState(int row, int col){
    int cnt=0;
    for(int i=0; i<4; i++){
        if(row + dx[i] >= 0 && row + dx[i] < n && col + dy[i] >= 0 && col + dy[i] < n){
            if(arr[row+dx[i]][col+dy[i]] == 1){
                cnt+=1;
            }
        }
    }
    if(cnt==3)
        return 1;
    else
        return 0;
}

int PaintGrid(int row, int col){
    arr[row][col] = 1;
    return CheckComfortableState(row, col);
}

int main() {
    cin >> n >> m;

    for(int i=0; i<m; i++){
        int row, col;
        cin >> row >> col;
        row--;
        col--;
        cout << PaintGrid(row, col) << endl;
    }


    return 0;
}