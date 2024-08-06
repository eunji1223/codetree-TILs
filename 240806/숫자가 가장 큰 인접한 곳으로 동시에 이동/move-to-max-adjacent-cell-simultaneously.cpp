#include <iostream>
using namespace std;

#define MaxGrid 20

int arr[MaxGrid][MaxGrid];
int arr_recent[MaxGrid][MaxGrid] = {0, };
int arr_simulate[MaxGrid][MaxGrid] = {0, };

int dx[4] = { -1, 1, 0, 0};
int dy[4] = { 0, 0, -1, 1};

void Simulation(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr_recent[i][j] == 1){
                int max = arr[i][j];
                int row = i, col = j;
                for(int k=0; k<4; k++){
                    if(arr[i+dx[k]][j+dy[k]] > max){
                        max = arr[i+dx[k]][j+dy[k]];
                        row = i + dx[k];
                        col = j + dy[k];
                    }
                }
                if(max != arr[i][j]){
                    arr_simulate[i][j] = 0;
                    arr_simulate[row][col]++;
                }
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr_simulate[i][j] > 1){
                arr_simulate[i][j] = 0;
            }
        }
    }
}

int main() {
    int n, m, t;
    cin >> n >> m >> t;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    for(int i=0; i<m; i++){
        int row, col;
        cin >> row >> col;
        row--;
        col--;
        arr_recent[row][col] = 1;
        arr_simulate[row][col] = 1;
    }

    for(int k=0; k<t; k++){
        Simulation(n);
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                arr_recent[i][j] = arr_simulate[i][j];
            }
        }
    }

    int cnt = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr_simulate[i][j] == 1)
                cnt++;
        }
    }

    cout << cnt;

    return 0;
}