#include <iostream>
using namespace std;

#define MaxGrid 100

int dx[4] = { -1, 1, 0, 0};
int dy[4] = { 0 , 0, -1, 1};
int arr[MaxGrid][MaxGrid] = {0, };

int main() {
    int n, r, c;
    cin >> n >> r >> c;
    r--;
    c--;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    cout << arr[r][c] << " ";

    bool isEnd = false;
    while(isEnd != true){
        int max = arr[r][c];
        int nr, nc;
        for(int i=0; i<4; i++){
            if(arr[r+dx[i]][c+dy[i]] > max){
                max = arr[r+dx[i]][c+dy[i]];
                nr = r + dx[i];
                nc = c + dy[i];
                break;
            }
        }

        if(arr[r][c] == max){
            break;
        }
        else{
            r = nr;
            c = nc;
            cout << arr[r][c] << " ";
        }
    }


    return 0;
}