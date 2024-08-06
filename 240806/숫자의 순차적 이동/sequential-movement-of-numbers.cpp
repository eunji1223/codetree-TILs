#include <iostream>
using namespace std;

#define MaxGrid 20

int arr[MaxGrid][MaxGrid];
int dx[8] = { -1, -1, 0, 1, 1, 1, 0, -1};
int dy[8] = { 0, 1, 1, 1, 0, -1, -1, -1};
int n, m;

bool InRange(int row, int col){
    return (row >= 0 && row < n && col >= 0 && col < n);
}

void MoveLargeVal(int row, int col){
    int max = -1;
    int maxRow = row, maxCol = col;
    for(int i=0; i<8; i++){
        if(InRange(row+dx[i], col+dy[i]) && arr[row+dx[i]][col+dy[i]] > max){
            max = arr[row+dx[i]][col+dy[i]];
            maxRow = row + dx[i];
            maxCol = col + dy[i];
        }
    }
    int temp = arr[row][col];
    arr[row][col] = arr[maxRow][maxCol];
    arr[maxRow][maxCol] = temp;
}

int main() {
    cin >> n >> m;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    for(int t=0; t<m; t++){
        for(int num=1; num<=n*n; num++){
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    if(arr[i][j] == num){
                        MoveLargeVal(i, j);
                    }
                }
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}