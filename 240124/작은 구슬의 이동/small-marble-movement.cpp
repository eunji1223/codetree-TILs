#include <iostream>
using namespace std;

int GetDir(char a){
    if(a == 'R'){
        return 0;
    }
    else if(a == 'D'){
        return 1;
    }
    else if(a == 'L'){
        return 2;
    }
    else if(a == 'U'){
        return 3;
    }
}

int main() {
    // (dir_num + 2) % 4; => 반대 방향!

    int n, t;
    int x, y;
    char dir;
    int dirn;

    int dirx[] = { 0, -1, 0, 1};
    int diry[] = { 1, 0, -1, 0};

    cin >> n >> t;
    cin >> x >> y >> dir;

    x-=1;
    y-=1;
    dirn = GetDir(dir);

    for(int i=0; i<t; i++){
        x += dirx[dirn];
        y += diry[dirn];
        if(x < 0 || y < 0 || x >= n || y >= n){
            dirn = (dirn + 2) % 4;
            x += dirx[dirn];
            y += diry[dirn];
        }
    }

    cout << x+1 << " " << y+1;

    return 0;
}