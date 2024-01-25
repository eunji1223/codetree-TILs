#include <iostream>
using namespace std;

int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int daycal(int m, int d){
    int days = 0;
    for(int i=0; i<m; i++){
        days += num_of_days[i];
    }
    return days + d;
}

int main() {
    int m1, d1, m2, d2;

    cin >> m1 >> d1 >> m2 >> d2;

    cout << daycal(m2, d2) - daycal(m1, d1) + 1;
    return 0;
}