#include <iostream>
#include <string>
using namespace std;

int num_of_days[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
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
    string inputday;
    int result = 0;

    cin >> m1 >> d1 >> m2 >> d2 >> inputday;
    
    int day1 = returndays(m1, d1);
    int day2 = returndays(m2, d2);
    
    int inputidx, day1idx, day2idx;
    for(int i=0; i<7; i++){
        if(inputday == day[i]){
            inputidx = i;
            break;
        }
    }
    if((day1%7-1) < inputidx){
        result += 1;
    }
    if(inputidx < (day2%7-1)){
        result += 1;
    }

    day1 += 7-(day1%7);
    day2 -= day2%7;
    result += (day2-day1)/7;

    cout << result;
    

    return 0;
}