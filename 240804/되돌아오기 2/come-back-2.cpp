#include <iostream>
#include <string>
using namespace std;

int main() {
    int dx[4] = { 1, 0, -1, 0};
    int dy[4] = { 0, -1, 0, 1};
    int curr_dir = 3;
    int cx = 0, cy = 0, time = 0;
    string str;
    
    cin >> str;

    for(int i=0; i<str.length(); i++){
        if(str[i] == 'F'){
            cx += dx[curr_dir];
            cy += dy[curr_dir];
        }
        else if(str[i] == 'R')
            curr_dir = (curr_dir + 1) % 4;
        else if(str[i] == 'L')
            curr_dir = (curr_dir - 1 + 4) % 4;
        
        time++;

        if(cx == 0 && cy == 0){
            cout << time;
            return 0;
        }

    }

    cout << -1;

    return 0;
}