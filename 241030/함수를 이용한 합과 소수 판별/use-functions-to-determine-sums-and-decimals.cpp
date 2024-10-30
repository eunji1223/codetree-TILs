#include <iostream>
using namespace std;

bool PrimeNumber(int num){
    if((num!=2 && num%2==0) || (num!=3 && num%3==0)){
        return false;
    }
    else{
        return true;
    }
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