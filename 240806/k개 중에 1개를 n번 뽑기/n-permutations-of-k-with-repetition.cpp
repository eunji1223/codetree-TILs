#include <iostream>
#include <list>
using namespace std;

#define MaxNum 8

int k, n;
list<int> arr;

void choose(int curr_pos){
    if(curr_pos == n+1){
        for (list<int>::iterator it = arr.begin(); it != arr.end(); it++){
            cout << *it << " ";
        }
        cout << endl;
        return;
    }
    
    for(int i=1; i<k+1; i++){
        arr.push_back(i);
        choose(curr_pos+1);
        arr.pop_back();
    }
}

int main() {
    cin >> k >> n;

    choose(1);

    return 0;
}