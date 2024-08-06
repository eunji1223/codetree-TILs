#include <iostream>
#include <list>
using namespace std;

int k, n;
list<int> numbers;

void Print(){
    for(list<int>::iterator it = numbers.begin(); it != numbers.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
}

void Choose(int curr_num){
    if(curr_num > n){
        Print();
        return;
    }

    for(int i=1; i<=k; i++){
        if(curr_num <= 2){
            numbers.push_back(i);
            Choose(curr_num+1);
            numbers.pop_back();
        }
        else{
            // end()는 요소가 들어갈 자리를 반환함으로 --를 해야지만 리스트에 들어있는 마지막 원소를 가리킴
            auto it1 = --numbers.end();  
            auto it2 = it1;
            --it2;

            if(*it1 == i && *it2 == i){
                continue;
            }
            else{
                numbers.push_back(i);
                Choose(curr_num+1);
                numbers.pop_back();
            }
        }
    }
}

int main() {
    cin >> k >> n;

    Choose(1);

    return 0;
}