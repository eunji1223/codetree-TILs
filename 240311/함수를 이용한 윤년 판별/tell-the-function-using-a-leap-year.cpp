#include <iostream>
using namespace std;

bool isLeapYear(int n){
    if(n%4!=0 || n%100==0 && n%400!=0){
        return false;
    }
    return true;
}


int main() {
    int y;

    cin >> y;

    if(isLeapYear(y)){
        cout << "true";
    }
    else{
        cout << "false";
    }
    return 0;
}