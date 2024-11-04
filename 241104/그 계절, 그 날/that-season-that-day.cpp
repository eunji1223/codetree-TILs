#include <iostream>
using namespace std;

int month_days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool isLeapYear(int y){
    if((y%4==0 && y%100!=0) || y%100==0 && y%400==0){
        return true;
    }
    return false;
}

void printSeason(int m, int d){
    if(d > month_days[m-1]){
        cout << -1 << endl;
    }
    else{
        switch(m){
            case 3: case 4: case 5:
            cout << "Spring" << endl;
            break;
            case 6: case 7: case 8:
            cout << "Summer" << endl;
            break;
            case 9: case 10: case 11:
            cout << "Fall" << endl;
            break;
            case 1: case 2: case 12:
            cout << "Winter" << endl;
            break;
            default:
            break;
        }
    }
}

int main() {
    int y, m, d;

    cin >> y >> m >> d;

    if(isLeapYear(y)){
        month_days[1] = 29;
    }

    printSeason(m, d);

    return 0;
}