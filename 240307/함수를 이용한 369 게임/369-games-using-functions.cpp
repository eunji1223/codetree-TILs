#include <iostream>
using namespace std;

int count(int a, int b){
    int cnt = 0;
    for(int i=a; i<=b; i++){
        if(i%3==0){
            cnt++;
        }
        else{
            int num = i;
            while(true){
                if(num<10){
                    if(num%3==0){
                        cnt++;
                    }
                    break;
                }
                if((num%10)%3==0){
                    cnt++;
                    break;
                }
                num/=10;
            }
        }
        
    }
    return cnt;
}


int main() {
    int a, b;
    cin >> a >> b;
    cout << count(a, b);
    return 0;
}