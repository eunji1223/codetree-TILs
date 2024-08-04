#include <iostream>
#include <map>
using namespace std;

int main() {
    map<char, int> m;
    m['E'] = 0;
    m['S'] = 1;
    m['W'] = 2;
    m['N'] = 3;
    int dx[4] = { 1, 0, -1, 0};
    int dy[4] = { 0, -1, 0, 1};

    int cnt;
    int time = 0, cx = 0, cy = 0;
    cin >> cnt;

    for(int i=0; i<cnt; i++){
        char dir;
        int dist, dir_num;
        cin >> dir >> dist;
        
        dir_num = m[dir];
        for(int j=0; j<dist; j++){
            cx += dx[dir_num];
            cy += dy[dir_num];
            time++;
            if(cx == 0 && cy == 0){
                cout << time;
                return 0;
            }
        }
    }

    cout << -1;

    return 0;
}