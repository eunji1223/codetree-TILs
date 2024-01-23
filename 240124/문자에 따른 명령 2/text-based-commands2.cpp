#include <iostream>
#include <string>
using namespace std;

int main() {
    // dir_num = (dir_num + 1) % 4; => 방향을 간결하게 알 수 있음.
    // 반시계는 (dir_num - 1 + 4) % 4;

    int x = 0;
    int y = 0;
    int dir = 3;
    
    int dirx[] = {1, 0, -1, 0};
    int diry[] = {0, -1, 0, 1};

    string str;

    cin >> str;

    for(int i=0; i<str.length(); i++){
        if(str[i] == 'L'){
            dir = (dir - 1 + 4) % 4;
        }
        else if(str[i] == 'R'){
            dir = (dir + 1) % 4;
        }
        else if(str[i] == 'F'){
            x += dirx[dir];
            y += diry[dir];
        }
    }

    cout << x << " " << y;

    return 0;
}