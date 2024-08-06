#include <iostream>
#include <tuple>
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

tuple<int, int> GetPosition(int num){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j] == num)
                return tuple<int, int>(i, j);
        }
    }
}

int main() {
    cin >> n >> m;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    int num = 1;
    for(int t=0; t<m; t++){
        while(num <= n*n){
            tuple<int, int> position = GetPosition(num);
            int row = get<0>(position);
            int col = get<1>(position);
            MoveLargeVal(row, col);
            num++;
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