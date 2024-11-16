#include <iostream>
using namespace std;

int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
    int m1, d1, m2, d2;

    cin >> m1 >> d1 >> m2 >> d2;

    for(int i=0; i<m1; i++){
        d1 += num_of_days[i];
    }

    for(int j=0; j<m2; j++){
        d2 += num_of_days[j];
    }

    cout << d2 - d1 + 1;

    return 0;
}