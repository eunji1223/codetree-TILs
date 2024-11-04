#include <iostream>
using namespace std;

int month_day[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool isExist(int m, int d){
    if( m < 13 && d <= month_day[m-1]){
        return true;
    }
    return false;
}

int main() {
    int m, d;

    cin >> m >> d;

    if(isExist(m, d)){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    return 0;
}