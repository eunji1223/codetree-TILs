#include <iostream>
using namespace std;

int main() {
    int p1age;
    char p1sex;
    int p2age;
    char p2sex;

    cin >> p1age >> p1sex;
    cin >> p2age >> p2sex;
    
    if((p1age >= 19 && p1sex == 'M') || (p2age >= 19 && p1sex == 'M')){
        cout << 1;
    }
    else{
        cout << 0;
    }
    return 0;
}