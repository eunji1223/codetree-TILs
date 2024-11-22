#include <iostream>
using namespace std;
#define MAX_VAL 200
#define OFFSET MAX_VAL/2;

int map[MAX_VAL][MAX_VAL] = { 0, };

int main() {
    int n;
    cin >> n;
    
    for(int k=0; k<n; k++){
        int x, y;
        cin >> x >> y;

        x += OFFSET;
        y += OFFSET;

        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                map[x+i][y+j] = 1;
            }
        }
    }

    int result = 0;
    for(int i=0; i<MAX_VAL; i++){
        for(int j=0; j<MAX_VAL; j++){
            result += map[i][j];
        }
    }
    cout << result << endl;
    return 0;
}