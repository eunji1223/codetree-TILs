#include <iostream>
using namespace std;

int n, t;
int x, y;
char d;
int arr[50][50];

// 동남북서
int dx[4] = {0, 1, -1, 0};
int dy[4] = {1, 0, 0, -1};

bool InRange(int x, int y, int n){
    return(0 <= x && x < n && 0 <= y && y < n);
}

int main() {
    cin >> n >> t;
    cin >> x >> y >> d;
    int dir;
    x--; y--;

    if(d=='R')
        dir=0;
    else if(d=='D')
        dir=1;
    else if(d=='L')
        dir=3;
    else if(d=='U')
        dir=2;
    else
        return 1;


    for(int i=0; i<t; i++){
        int nx, ny;
        nx = x+dx[dir];
        ny = y+dy[dir];

        if(InRange(nx, ny, n)){
            x=nx;
            y=ny;
        }
        else{
            dir=3-dir;
        }
    }
    cout << x+1 << " " << y+1;
    
    return 0;
}