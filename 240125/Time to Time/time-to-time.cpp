#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int time1 = a*60 + b;
    int time2 = c*60 + d;

    cout << time2 - time1;
    return 0;
}