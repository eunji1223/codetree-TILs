#include <iostream>
using namespace std;

int main() {
    double cm, kg;

    cin >> cm >> kg;

    cm /= 100;
    int bmi = kg/(cm*cm);
    cout << bmi << endl;
    if(bmi>=25){
        cout << "Obesity";
    }
    return 0;
}