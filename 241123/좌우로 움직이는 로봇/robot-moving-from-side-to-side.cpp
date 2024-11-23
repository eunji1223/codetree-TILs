#include <iostream>
using namespace std;

void record(int num, int memory[], int size[], char dir[]){
    int idx = 1;
    for(int i=0; i<num; i++){
        for(int j=0; j<size[i]; j++){
            if(dir[i]=='R'){
                memory[idx] = memory[idx-1]+1;
            }
            else if(dir[i]=='L'){
                memory[idx] = memory[idx-1]-1;
            }
            idx++;
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    int size_a[n];
    char dir_a[n];
    int size_b[m];
    char dir_b[m];

    int max_time = 0, min_time = 0, sum_time = 0;
    for(int i=0; i<n; i++){
        cin >> size_a[i] >> dir_a[i];
        sum_time += size_a[i];
    }
    max_time = sum_time;
    min_time = sum_time;
    int memory_a[sum_time] = { 0, };
    record(n, memory_a, size_a, dir_a);

    sum_time = 0;
    for(int i=0; i<m; i++){
        cin >> size_b[i] >> dir_b[i];
        sum_time += size_b[i];
    }
    if(sum_time > max_time){
        max_time = sum_time;
    }
    else{
        min_time = sum_time;
    }
    int memory_b[sum_time] = { 0, };
    record(m, memory_b, size_b, dir_b);

    int cnt = 0;
    for(int i=1; i<max_time; i++){
        if(memory_a[i-1] != memory_b[i-1]){
            if(memory_a[i]==memory_b[i]){
                cnt++;
            }
            else if(min_time < i && memory_b[i] && memory_a[min_time]==memory_b[i]){
                cnt++;
            }
            else if(min_time < i && memory_a[i]==memory_b[min_time]){
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}