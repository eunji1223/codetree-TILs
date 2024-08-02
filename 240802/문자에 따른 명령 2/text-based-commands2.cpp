#include <iostream>
#include <string>
using namespace std;

int main() {
    int dx[4]={1, 0, -1, 0};
    int dy[4]={0, -1, 0, 1};

    int x=0;
    int y=0;
    int dir=3;
    string str;
    cin >> str;

    for(int i=0; i<str.size(); i++){
        if( str[i] == 'F'){
            x+=dx[dir];
            y+=dy[dir];
        }
        else if( str[i] == 'L')
            dir=(dir-1+4)%4;
        else
            dir=(dir+1)%4;
    }
    cout << x << " " << y;
    
    return 0;
}