#include <iostream>
using namespace std;

#define MAXVAL 200
#define OFFSET MAXVAL/2

char map[MAXVAL][MAXVAL];

void Paint(int num, int x1, int y1, int x2, int y2){
    char color;
    if(num%2==0){
        color = 'R';
    }
    else{
        color = 'B';
    }

    for(int i=x1; i<x2; i++){
        for(int j=y1; j<y2; j++){
            map[i][j] = color;
        }
    }
}

int main() {
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        Paint(i, x1+OFFSET, y1+OFFSET, x2+OFFSET, y2+OFFSET);
    }

    int count = 0;
    for(int i=0; i<MAXVAL; i++){
        for(int j=0; j<MAXVAL; j++){
            if(map[i][j] == 'B'){
                count++;
            }
        }
    }

    cout << count << endl;
    
    return 0;
}