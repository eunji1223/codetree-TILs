#include <iostream>
using namespace std;

void Run(int num, int arr[], int v[], int t[]){
    int idx = 1;
    for(int i=0; i<num; i++){
        for(int j=0; j<t[i]; j++){
            arr[idx] = arr[idx-1]+v[i];
            idx++;
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    int v_a[n];
    int t_a[n];
    int v_b[m];
    int t_b[m];

    int arr_int = 0;
    for(int i=0; i<n; i++){
        cin >> v_a[i] >> t_a[i];
        arr_int += t_a[i];
    }
    
    int arr_a[arr_int+1] = { 0, };
    Run(n, arr_a, v_a, t_a);

    for(int i=0; i<m; i++){
        cin >> v_b[i] >> t_b[i];
    }

    int arr_b[arr_int+1] = { 0, };
    Run(m, arr_b, v_b, t_b);

    int first = 0;
    int change_cnt = 0;
    for(int i=2; i<arr_int+1; i++){
        if((arr_b[i-1] <= arr_a[i-1] && arr_b[i] > arr_a[i]) || (arr_b[i-1] >= arr_a[i-1] && arr_b[i] < arr_a[i])){
            change_cnt++;
        }
    }
    cout << change_cnt;
    return 0;
}