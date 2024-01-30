#include <iostream>
#include <algorithm>

using namespace std;

#define MAX_N 100

int n, m;
int grid[MAX_N][MAX_N];

int seq[MAX_N];

bool IsHappySequence(){
    // 주어진 seq가 행복한 수열인지 판단하는 함수입니다.
    int consecutive_count = 1, max_ccnt = 1;
    for(int i = 1; i < n; i++) {
        if (seq[i - 1] == seq[i])
            consecutive_count++;
        else
            consecutive_count = 1;
        
        max_ccnt = max(max_ccnt, consecutive_count);
    }
    
    // 최대로 연속한 회수가 m이상이면 true를 반환합니다. 
    return max_ccnt >= m;
}

int main(){
    cin >> n >> m;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> grid[i][j];

    int num_happy = 0;
    
    // 먼저 가로로 행복한 수열의 수를 셉니다.
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++)
            seq[j] = grid[i][j];
        
        if(IsHappySequence())
            num_happy++;
    }
    
    // 세로로 행복한 수열의 수를 셉니다.
    for(int j = 0; j < n; j++){
        // 세로로 숫자들을 모아 새로운 수열을 만듭니다.
        for(int i = 0; i < n; i++)
            seq[i] = grid[i][j];
        
        if(IsHappySequence())
            num_happy++;
    }

    cout << num_happy;

    return 0;
}

/* 해결해보기
#include <iostream>
using namespace std;

int main() {
    int n, m;

    cin >> n >> m;

    int arr[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    int mcount = 0;

    for(int i=0; i<n; i++){
        int maxSeq = 1;
        int recnum = arr[i][0];
        bool iscompleted = false;
        for(int j=0; j<n-1; j++){
            if(recnum == arr[i][j+1]){
                maxSeq += 1;
            }
            else{
                if(maxSeq >= m){
                    mcount++;
                    iscompleted = true;
                    break;
                }
                else{
                    maxSeq = 1;
                }
                recnum = arr[i][j+1];
            }
        }

        if(maxSeq >= m && iscompleted == false){
            mcount++;
        }
        
        int maxSeqCol = 1;
        int recNumCol = arr[0][i];
        iscompleted = false;
        for(int k=0; k<n-1; k++){
            if(recNumCol == arr[k+1][i]){
                maxSeqCol += 1;
            }
            else{
                recNumCol = arr[k+1][i];
                if(maxSeqCol >= m){
                    mcount++;
                    iscompleted == true;
                    break;
                }
                else{
                    maxSeq = 1;
                }
            }
        }
        if(maxSeqCol >= m && iscompleted == false){
            mcount++;
        }
    }

    cout << mcount;

    return 0;
}
*/