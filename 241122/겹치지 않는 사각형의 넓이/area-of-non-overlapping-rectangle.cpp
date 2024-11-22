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
    for(int i=0; i<3; i++){
        cin >> x1 >> y1 >> x2 >> y2;
        if(i==2){
            Erase(x1+OFFSET, y1+OFFSET, x2+OFFSET, y2+OFFSET);
        }
        else{
            Paint(x1+OFFSET, y1+OFFSET, x2+OFFSET, y2+OFFSET);
        }
    }

    int width = 0;
    for(int i=0; i<MAX_VALUE; i++){
        for(int j=0; j<MAX_VALUE; j++){
            width += map[i][j];
        }
    }
    cout << width;

    return 0;
}