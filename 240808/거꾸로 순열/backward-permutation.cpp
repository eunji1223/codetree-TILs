#include <iostream>
using namespace std;

#define MaxArraySize 8

int n;
int arr[MaxArraySize];
bool visited[MaxArraySize] = { false, };

void Print(){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Choose(int curr_num){
    if(curr_num >= n){
        Print();
        return;
    }

    for(int i=2; i>=0; i--){
        if(visited[i] == false){
            arr[curr_num] = i+1;
            visited[i] = true;
            Choose(curr_num+1);
            visited[i] = false;
        }
    }
}

int main() {
    cin >> n;

    Choose(0);

    return 0;
}