#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    vector<int> numbers;
    cin >> n;

    for(int i=0; i<n; i++){
        string order;
        int num;
        cin >> order;

        if(order == "push_back"){
            cin >> num;
            numbers.push_back(num);
        }
        else if(order == "get"){
            cin >> num;
            cout << numbers[num-1] << endl;
        }
        else if(order == "pop_back"){
            numbers.pop_back();
        }
        else if(order == "size"){
            cout << numbers.size() << endl;
        }
    }   
    return 0;
}