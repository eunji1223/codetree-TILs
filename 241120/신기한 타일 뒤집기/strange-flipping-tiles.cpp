#include <iostream>
using namespace std;
#define MAX_SIZE 200000
#define OFFSET MAX_SIZE/2

char map[MAX_SIZE];

int main() {
    int n;
    cin >> n;

    int current = OFFSET;
    int min_index = OFFSET;
    int max_index = OFFSET;
    for(int i=0; i<n; i++){
        int size;
        char dir;
        cin >> size >> dir;

        int dir_int = 1;
        char color = 'B';

        if(current < min_index){
            min_index = current;
        }
        if(current > max_index){
            max_index = current;
        }

        if(dir=='L'){
            dir_int = -1;
            color = 'W';
        }
        for(int i=0; i<size; i++){
            map[current] = color;
            if(i!=size-1)
                current += dir_int;
        }
    }

    int white = 0, black = 0;
    for(int i=min_index; i<max_index+1; i++){
        if(map[i]=='W'){
            white++;
        }
        else if(map[i] == 'B'){
            black++;
        }
    }

    cout << white << " " << black;

    return 0;
}