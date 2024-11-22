#include <iostream>
using namespace std;
#define MAX_VALUE 2000
#define OFFSET MAX_VALUE/2

int map[MAX_VALUE][MAX_VALUE] = { 0, };

void Paint(int x1, int y1, int x2, int y2){
    for(int i=x1; i<x2; i++){
        for(int j=y1; j<y2; j++){
            map[i][j] = 1;
        }
    }
}

void Erase(int x1, int y1, int x2, int y2){
    for(int i=x1; i<x2; i++){
        for(int j=y1; j<y2; j++){
            map[i][j] = 0;
        }
    }
}

int main() {
    int x1, y1, x2, y2;
    int max_x = OFFSET, min_x = MAX_VALUE, max_y = OFFSET, min_y = MAX_VALUE;
    for(int i=0; i<3; i++){
        cin >> x1 >> y1 >> x2 >> y2;
        if(i==2){
            Erase(x1+OFFSET, y1+OFFSET, x2+OFFSET, y2+OFFSET);
        }
        else{
            Paint(x1+OFFSET, y1+OFFSET, x2+OFFSET, y2+OFFSET);
        }

        if(x1 + OFFSET < min_x){
            min_x = x1 + OFFSET;
        }
        if(x2 + OFFSET > max_x){
            max_x = x2 + OFFSET;
        }
        if(y1 + OFFSET < min_y){
            min_y = y1 + OFFSET;
        }
        if(y2 + OFFSET > max_y){
            max_y = y2 + OFFSET;
        }
    }
    
    int width = 0;
    for(int i=min_x; i<max_x+1; i++){
        for(int j=min_y; j<max_y+1; j++){
            width += map[i][j];
        }
    }
    cout << width;

    return 0;
}