#include <iostream>
using namespace std;

bool in_range(int n, int x, int y){
    return (x >= 0 && x < n && y >= 0 && y < n);
}

int main() {
    int n;

    cin >> n;
    int arr[n][n];

    int dirx[] = { 1, 0, -1, 0};
    int diry[] = { 0, -1, 0, 1};

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    int totalcnt = 0;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int cnt = 0;
            for(int k=0; k<4; k++){
                if(in_range(n, i + dirx[k], j + diry[k]) && arr[i + dirx[k]][j + diry[k]] == 1){
                    cnt += 1;
                }
            }
            if(cnt >= 3){
                    totalcnt += 1;
            }
        }
    }

    cout << totalcnt;
}