#include <iostream>
using namespace std;

#define MaxGrid 20

int arr[MaxGrid][MaxGrid];
int arr_simulate[MaxGrid][MaxGrid] = {0, };

int dx[4] = { -1, 1, 0, 0};
int dy[4] = { 0, 0, -1, 1};

void Simulation(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr_simulate[i][j] == 1){
                int max = arr[i][j];
                for(int k=0; k<4; k++){
                    int row = i+dx[k];
                    int col = j+dy[k];
                    if(arr[row][col] > max){
                        max = arr[row][col];
                        arr_simulate[i][j] = 0;
                        arr_simulate[row][col] += 1;
                        break;
                    }
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
        arr_simulate[row][col] = 1;
    }

    for(int i=0; i<t; i++){
        Simulation(n);
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