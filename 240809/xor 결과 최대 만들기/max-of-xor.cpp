#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

#define MaxSize 20

int n, m;
int maxValue = -1;
int arr[MaxSize] = {0, };
int arr_Selected[MaxSize] = {0, };

void Calculate_MaxValue(){
    int value;
    int index = 0;
    for(int i=0; i<n; i++){
        if(arr_Selected[i] == 1){
            value = arr[i];
            index = i;
            break;
        }
    }

    for(int j=index; j<n; j++){
        if(arr_Selected[j] == 1){
            value ^= arr[j];
        }
    }
    
    if(value > maxValue){
        maxValue = value;
    }
}

void Choose(int curr_num){
    if(curr_num >= m){
        Calculate_MaxValue();
        return;
    }

    for(int i=0; i<n; i++){
        if(arr_Selected[i] == 0){
            arr_Selected[i] = 1;
            Choose(curr_num+1);
            arr_Selected[i] = 0;
        }
    }
}

int main() {
    cin >> n >> m;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    Choose(0);

    cout << maxValue;

    return 0;
}