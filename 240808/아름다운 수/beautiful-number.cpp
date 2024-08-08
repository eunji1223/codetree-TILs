#include <iostream>
#include <list>
using namespace std;

int n;
int result_cnt = 0;
list<int> numbers;

bool Count(int num){
    int cnt = 0;
    for(list<int>::iterator it = numbers.begin(); it != numbers.end(); it++){
        if(*it == num){
            cnt++;
        }
    }
    return (cnt % num == 0);
}

void Choose(int curr_num){
    if(curr_num > n){
        bool result = true;
        for(int i=1; i<=4; i++){
            if(!Count(i)){
                result = false;
                return;
            }
        }
        if(result){
            result_cnt++;
            return;
        }
    }

    for(int i=1; i<=4; i++){
        numbers.push_back(i);
        Choose(curr_num+1);
        numbers.pop_back();
    }

}

int main() {
    cin >> n;

    Choose(1);

    cout << result_cnt;

    return 0;
}