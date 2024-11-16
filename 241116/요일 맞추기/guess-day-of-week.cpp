#include <iostream>
#include <string>
using namespace std;

int day_of_year[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string str_day[7] = { "Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

int main() {
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;

    int first = d1;
    int second = d2;

    for(int i=0; i<m1; i++){
        first += day_of_year[i];
    }

    for(int i=0; i<m2; i++){
        second += day_of_year[i];
    }

    int day = (second - first) % 7;

    if(day<0){
        day = 7 + day;
    }

    cout << str_day[day];

    return 0;
}