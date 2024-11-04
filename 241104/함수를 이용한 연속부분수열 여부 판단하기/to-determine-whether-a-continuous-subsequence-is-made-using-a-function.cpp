#include <iostream>
using namespace std;

int Judge(int n1_arr[], int n2_arr[], int n2, int idx){
    for(int i=0; i<n2; i++){
        if(n1_arr[idx+i] != n2_arr[i]){
            return 0;
        }
    }
    return 1;
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    int n1_arr[n1], n2_arr[n2];
    int check_idx[n1] = {0};
    
    for(int i=0; i<n1; i++){
        cin >> n1_arr[i];
    }

    for(int i=0; i<n2; i++){
        cin >> n2_arr[i];
    }

    for(int i=0; i<(n1-n2+1); i++){
        if(Judge(n1_arr, n2_arr, n2, i)){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}