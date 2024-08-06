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
        if(curr_num == 1 || numbers.back() != i){
            numbers.push_back(i);
            Choose(curr_num+1);
            numbers.pop_back();
        }
    }
}

int main() {
    cin >> k >> n;

    Choose(1);

    return 0;
}