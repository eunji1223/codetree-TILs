#include <iostream>
#include <algorithm>
using namespace std;

bool in_range(int n, int m, int x, int y){
    return (x >= 0 && x < n && y >= 0 && y < m);
}

int main() {
    int n, m;
    int x, y, dir;

    int dx[] = { 0, 1, 0, -1};
    int dy[] = { 1, 0, -1, 0};
    x = y = dir = 0;
    cin >> n >> m;

    int arr[n][m];

    fill(&arr[0][0], &arr[n-1][m-1], 0);

    for(int i=1; i<(n*m+1); i++){
        arr[x][y] = i;
        if(in_range(n, m, x + dx[dir], y + dy[dir]) && arr[x + dx[dir]][y + dy[dir]] == 0){
            x += dx[dir];
            y += dy[dir];
        }
        else{
            dir = (dir + 1) % 4;
            x += dx[dir];
            y += dy[dir];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    
    return 0;
}