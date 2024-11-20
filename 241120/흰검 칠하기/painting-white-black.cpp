#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_SIZE 200000
#define OFFSET MAX_SIZE/2
// 0 - 공백, 1 - 흰색, 2 - 검은색, 3 - 회색

int tile_black[MAX_SIZE] = { 0, };
int tile_white[MAX_SIZE] = { 0, };
char last_tile_color[MAX_SIZE];

int paint(int current, int size, int dir){
    for(int i=0; i<size; i++){
        if(dir==1){
            tile_white[current]++;
            last_tile_color[current] = 'W';
            if(i!=size-1)
                current -= 1;
        }
        else if(dir==2){
            tile_black[current]++;
            last_tile_color[current] = 'B';
            if(i!=size-1)
                current += 1;
        }
    }
    return current;
}

int main() {
    int n;
    cin >> n;

    int current = OFFSET;
    int max_index = OFFSET;
    int min_index = OFFSET;
    for(int i=0; i<n; i++){
        int x;
        char dir;
        cin >> x >> dir;
        if(dir == 'L'){
            current = paint(current, x, 1); // 흰색 1
        }
        else if(dir == 'R'){
            current = paint(current, x, 2); // 검정색 2
        }

        if(current > max_index){
            max_index = current;
        }
        else if(current < min_index){
            min_index = current;
        }
    }

    int cnt_w = 0, cnt_b = 0, cnt_g = 0;
    for(int i=min_index; i<max_index+1; i++){
        if(tile_white[i] >= 2 && tile_black[i] >= 2){
            cnt_g++;
        }
        else if(last_tile_color[i] == 'B'){
            cnt_b++;
        }
        else if(last_tile_color[i] == 'W'){
            cnt_w++;
        }
    }
    cout << cnt_w << " " << cnt_b << " " << cnt_g << endl;
    return 0;
}