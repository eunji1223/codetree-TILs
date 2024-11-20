#include <iostream>
using namespace std;
#define MAX_SIZE 200
#define OFFSET MAX_SIZE/2

int map[MAX_SIZE][MAX_SIZE] = { 0, };

int GetExtent(int x1, int y1,int x2, int y2){
    int point = 0;
    for(int i=x1; i<x2; i++){
        for(int j=y1; j<y2; j++){
            if(map[i][j] == 1){
                point += 1;
                map[i][j] = 0;
            }
        }
    }
    return point;
}

int main() {
    int n;
    cin >> n;
    
    fill(&map[0][0], &map[MAX_SIZE][MAX_SIZE], 1);

    int x1, y1, x2, y2;
    int extent = 0;
    for(int i=0; i<n; i++){
        cin >> x1 >> y1 >> x2 >> y2;
        extent += GetExtent(x1+OFFSET, y1+OFFSET, x2+OFFSET, y2+OFFSET);
    }
    cout << extent; 
    
    return 0;
}