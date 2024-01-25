#include <iostream>
#include <string>
using namespace std;

int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string day[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

int returndays(int m, int d){
    int days = 0;
    for(int i=0; i<m; i++){
        days += num_of_days[i];
    }
    return days + d;
}

int main() {
    int m1, d1, m2, d2;

    cin >> m1 >> d1 >> m2 >> d2;

    int day1 = returndays(m1, d1);
    int day2 = returndays(m2, d2);

    int result; 
    if((day2-day1)<0){
        result = 7-((day1-day2)%7);
    }
    else{
        result = (day2-day1)%7;
    }
    cout << day[result];
    
    return 0;
}