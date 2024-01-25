#include <iostream>
using namespace std;

int mincal(int d, int h, int m){
    int mins = 0;
    mins = d*1440 + h*60 + m;
    return mins;
}

int main() {
    int a, b, c;

    cin >> a >> b >> c;
    int t1 = mincal(11, 11, 11);
    int t2 = mincal(a, b, c);

    if(t2 < t1){
        cout << -1;
    }
    else{
        cout << t2 - t1;
    }

    
    return 0;
}