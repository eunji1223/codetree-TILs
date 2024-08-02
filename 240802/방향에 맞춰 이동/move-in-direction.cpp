#include <iostream>
#include <string>
#include <map>
using namespace std;


int main(){
    map<char, int> m;
    m['E'] = 0;
    m['S'] = 1;
    m['W'] = 2;
    m['N'] = 3;
    int dx[4]={1, 0, -1, 0};
    int dy[4]={0, -1, 0, 1};

    int x = 0, y = 0;
    int n;
    cin >> n;

    for(int i=0; i<4; i++){
        char dir;
        int dir_num, dist;
        cin >> dir >> dist;

        dir_num=m[dir];
        x+=dx[dir_num]*dist;
        y+=dy[dir_num]*dist;
    }

    cout << x << " " << y;
}