#include <iostream>
using namespace std;

int main() {
    int n, r, c;
    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};
    cin >> n >> r >> c;

    r-=1;
    c-=1;

    int grid[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> grid[i][j];
        }
    }

    cout << grid[r][c] << " ";

    bool iscompleted = false;
    int curr_r, curr_c;
    curr_r = r;
    curr_c = c;
    while(iscompleted == false){
        int max, curr;
        max = grid[curr_r][curr_c];
        curr = max;
        for(int i=0; i<4; i++){
            if(grid[curr_r+dx[i]][curr_c+dy[i]] > max && curr_r+dx[i] > 0 && curr_c+dy[i] > 0 ){
                max = grid[curr_r+dx[i]][curr_c+dy[i]];
                curr_r = curr_r + dx[i];
                curr_c = curr_c + dy[i];
                max = grid[curr_r][curr_c];
                break;
            }
        }
        if(curr == max){
            iscompleted = true;
        }
        else{
            cout << max << " ";
        }
    }

    
    return 0;
}