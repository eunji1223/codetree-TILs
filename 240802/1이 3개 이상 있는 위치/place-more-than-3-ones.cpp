#include <iostream>
using namespace std;

int dx[4]={0, 1, 0, -1};
int dy[4]={1, 0, -1, 0};
int arr[100][100];

bool InRange(int x, int y, int n){
    return(0 <= x && x < n && 0 <= y && y < n);
}

int Count(int x, int y, int n){
    int count=0;
    // 4방향으로 설정하는 것 주의
    for(int i=0; i<4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(InRange(nx, ny, n) && arr[nx][ny] == 1){
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin >> arr[i][j];

    int result=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(Count(i, j, n) >= 3)
                result++;
        }
    }

    cout << result;
    return 0;
}