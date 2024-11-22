#include <iostream>
using namespace std;

#define MAX_VAL 2000
#define OFFSET MAX_VAL/2

int map[MAX_VAL][MAX_VAL] = { 0, };

int main() {
    int x1, y1, x2, y2;

    for(int i=0; i<2; i++){
        cin >> x1 >> y1 >> x2 >> y2;
        x1 += OFFSET;
        x2 += OFFSET;
        y1 += OFFSET;
        y2 += OFFSET;

        int val = 0;
        if(i==0){
            val = 1;
        }

        for(int i=x1; i<x2; i++){
            for(int j=y1; j<y2; j++){
                map[i][j] = val;
            }
        }
    }

    int max_length_width = 0;
    int max_length_heigh = 0;
    int min_length_width = MAX_VAL;
    int min_length_heigh = MAX_VAL;

    for(int i=0; i<MAX_VAL; i++){
        for(int j=0; j<MAX_VAL; j++){
            if(map[i][j] == 1){
                if(j > max_length_heigh){
                    max_length_heigh = j;
                }
                if(i > max_length_width){
                    max_length_width = i;
                }
                if(j < min_length_heigh){
                    min_length_heigh = j;
                }
                if(i < min_length_width){
                    min_length_width = i;
                }
            }
        }
    }

    int result = (max_length_width - min_length_width + 1) * (max_length_heigh - min_length_heigh + 1);
    cout << result;

    return 0;
}