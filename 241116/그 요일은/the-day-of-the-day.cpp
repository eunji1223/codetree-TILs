#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int day_of_years[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string str_day[7] = { "Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun" };

int main() {
    int m1, d1, m2, d2;
    string day_input;

    cin >> m1 >> d1 >> m2 >> d2;
    cin >> day_input;

    int first = d1;
    int second = d2;

    for(int i=0; i<m1; i++){
        first += day_of_years[i];
    }

    for(int i=0; i<m2; i++){
        second += day_of_years[i];
    }

    int count = (second - first) / 7;
    int day = (second - first) % 7;

    for(int i=0; i<=day; i++){
        if(str_day[i]==day_input){
            count++;
        }
    }

    cout << count;
    
    return 0;
}