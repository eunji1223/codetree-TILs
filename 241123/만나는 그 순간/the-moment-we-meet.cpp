#include <iostream>
using namespace std;

void record(int num, int arr[], int move[], char dir[]){
    int record_val = 1;
    for(int i=1; i<=num; i++){
        for(int j=0; j<move[i-1]; j++){
            if(dir[i-1] == 'R'){
                arr[record_val] = arr[record_val-1] + 1;
                record_val++;
            }
            else if(dir[i-1] == 'L'){
                arr[record_val] = arr[record_val-1] - 1;
                record_val++;
            }
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    int move_a[n];
    int move_b[m];
    char dir1[n];
    char dir2[m];

    int min_time = 0, arr_size = 0;
    for(int i=0; i<n; i++){
        cin >> dir1[i] >> move_a[i];
        arr_size += move_a[i];
    }
    int memory_a[arr_size] = { 0, };
    min_time = arr_size;
    record(n, memory_a, move_a, dir1);

    arr_size = 0;
    for(int i=0; i<m; i++){
        cin >> dir2[i] >> move_b[i];
        arr_size += move_b[i];
    }
    int memory_b[arr_size] = { 0, };
    if(arr_size < min_time){
        min_time = arr_size;
    }
    record(m, memory_b, move_b, dir2);

    int meet_point = -1;
    for(int i=1; i<min_time; i++){
        if(memory_a[i] == memory_b[i]){
            meet_point = i;
            break;
        }
    }
    cout << meet_point;

    return 0;
}