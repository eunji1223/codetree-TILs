#include <iostream>
using namespace std;

int map[2000] = { 0, };

void paint(int& current_loc, int size, char dir){
    int dir_num;
    if(dir == 'R'){
        for(int i=0; i<size; i++){
            map[current_loc] += 1;
            current_loc += 1;
        }
    }
    else if(dir == 'L'){
        for(int i=0; i<size; i++){
            current_loc -= 1;
            map[current_loc] += 1;
        }
    }
}


int main() {
    int n;
    cin >> n;

    int current_loc = 1000;
    for(int i=0; i<n; i++){
        int size;
        char dir;
        cin >> size >> dir;
        paint(current_loc, size, dir);
    }

    int cnt = 0;
    for(int i=0; i<2000; i++){
        if(map[i]>1){
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}