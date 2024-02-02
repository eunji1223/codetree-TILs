#include <iostream>
using namespace std;

int main() {
    int n, r, c;

    cin >> n;

    int grid[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> grid[i][j];
        }
    }
    
    cin >> r >> c;

    int size = grid[r-1][c-1]-1;

    for(int i=0; i<=size; i++){
        if((r-1-i)>=0){
            grid[r-1-i][c-1] = 0;
        }
        if((r-1+i)<n){
            grid[r-1+i][c-1] = 0;
        }
        if((c-1-i)>=0){
            grid[r-1][c-1-i] = 0;
        }
        if((c-1+i)<n){
            grid[r-1][c-1+i] = 0;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(grid[i][j]==0){
                int a = i;       
                while(a-1>=0 && grid[a-1][j] != 0){
                    int temp = grid[a-1][j];
                    grid[a-1][j] = grid[a][j];
                    grid[a][j] = temp;
                    a -= 1;
                }
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << grid[i][j] << " "; 
        }
        cout << endl;
    }


}