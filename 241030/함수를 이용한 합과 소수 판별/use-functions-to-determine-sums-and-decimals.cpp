#include <iostream>
using namespace std;

bool PrimeNumber(int num){
    for(int i=2; i<num; i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

bool SumNum(int num){
    int sum = 0;

    while(num!=0){
        sum += num%10;
        num = num/10;
    }

    if(sum%2==0){
        return true;
    }
    else{
        return false;
    }
}

int main() {
    int a, b;
    int count = 0;

    cin >> a >> b;

    for(int i=a; i<=b; i++){
        if(PrimeNumber(i) && SumNum(i)){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}