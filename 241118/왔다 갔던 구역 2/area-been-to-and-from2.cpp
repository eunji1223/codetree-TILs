#include <iostream>
using namespace std;

int map[1000] = { 0, };

void paint(int current_loc, int size, char dir){
    int dir_num;
    if(dir == 'R'){
        dir_num = 1;
    }
    else if(dir == 'L'){
        dir_num = -1;
    }
    for(int i=0; i<size; i++){
        map[current_loc+i] += 1;
    }
}


int main() {
    int n;
    cin >> n;

    int current_loc = 500;
    for(int i=0; i<n; i++){
        int size;
        char dir;
        cin >> size >> dir;
        paint(current_loc, size, dir);
    }

    int cnt = 0;
    for(int i=0; i<1000; i++){
        if(map[i]>1){
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}