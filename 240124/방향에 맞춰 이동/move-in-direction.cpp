#include <iostream>
using namespace std;

int main() {
    int total;
    int x, y;

    x = 0;
    y = 0;

    cin >> total;

    for(int i=0; i<total; i++){
        char dir;
        int count;
        cin >> dir >> count;

        if(dir == 'E'){
            x += count;
        }
        else if(dir == 'S'){
            y -= count;
        }
        else if(dir == 'W'){
            x -= count;
        }
        else if(dir == 'N'){
            y += count;
        }
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