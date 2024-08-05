#include <iostream>
#include <string>
#include <map>
using namespace std;

#define MaxGrid 99

int dx[4] = { 0, 1, 0, -1};
int dy[4] = { 1, 0, -1, 0};

int arr[MaxGrid][MaxGrid];

int main() {
    int n, t;
    int cur_dir = 3;
    string str;
    cin >> n >> t >> str;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    int row = n/2, col = n/2;
    int result = arr[row][col];

    for(int i=0; i<str.length(); i++){
        switch(str[i]){
            case 'L':
                cur_dir = (cur_dir - 1 + 4) % 4;
                break;
            case 'R':
                cur_dir = (cur_dir + 1) % 4;
                break;
            case 'F':
                if(row + dx[cur_dir] >= 0 && row + dx[cur_dir] < n && col + dy[cur_dir] >= 0 && col + dy[cur_dir] < n){
                    row += dx[cur_dir];
                    col += dy[cur_dir];
                    result += arr[row][col];
                }
                break;
        }
    }

    cout << result;

    return 0;
}