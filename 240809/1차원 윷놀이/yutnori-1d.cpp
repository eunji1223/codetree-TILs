#include <iostream>
using namespace std;

int n, m, k;
int max_score = 0;
int arr[100];
int horse[4];

void Calculate_Score(){
    int score = 0;
    for(int i=0; i<k; i++){
        if(horse[i] >= m)
            score++;
    }
    if(score > max_score){
        max_score = score;
    }
}

void Choose(int curr_num){
    if(curr_num >= n){
        Calculate_Score();
        return;
    }

    for(int i=0; i<k; i++){
        horse[i] += arr[curr_num];
        Choose(curr_num+1);
        horse[i] -= arr[curr_num];
    }

}

int main() {
    cin >> n >> m >> k;
    m--;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    Choose(0);
    cout << max_score;

    return 0;
}