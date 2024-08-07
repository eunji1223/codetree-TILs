#include <iostream>
#include <list>
using namespace std;

#define MaxArraySize 10

int n, m;
list<int> comb;

void Print(){
    for(list<int>::iterator it = comb.begin(); it != comb.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
}

void Choose(int curr_num, int cnt){
    if(curr_num > n){
        if(cnt == m){
            Print();
        }
        return;
    }
    comb.push_back(curr_num);
    Choose(curr_num + 1, cnt + 1);
    comb.pop_back();

    Choose(curr_num + 1, cnt);
}

int main() {
    cin >> n >> m;

    Choose(1, 0);

    return 0;
}