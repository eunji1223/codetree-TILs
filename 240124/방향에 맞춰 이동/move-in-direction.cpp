#include <iostream>
using namespace std;

int main() {
    int total;
    int x, y;

    x = 0;
    y = 0;

    cin >> total;

    int dirx[] = {1, 0, -1, 0};
    int diry[] = {0, -1, 0, 1};

    for(int i=0; i<total; i++){
        char dir;
        int count;
        int num;
        cin >> dir >> count;

        if(dir == 'E'){
            num = 0;
        }
        else if(dir == 'S'){
            num = 1;
        }
        else if(dir == 'W'){
            num = 2;
        }
        else if(dir == 'N'){
            num = 3;
        }

        x += dirx[num] * count;
        y += diry[num] * count;
    }

    cout << x << " " << y;
/*
    // dx, dy 테크닉을 이용한 방법! => 코드 간결화가 가능해짐
    int dx[] = [1, 0, -1, 0]; 
    int dy[] = [0, -1, 0, 1];

    nx = x + dx[dir_num];
    ny = y + dy[dir_num];
*/
    return 0;
}