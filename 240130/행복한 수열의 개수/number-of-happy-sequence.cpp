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
        for(int j=0; j<n-1; j++){
            if(recnum == arr[i][j+1]){
                maxSeq += 1;
            }
            else{
                if(maxSeq >= m){
                    mcount++;
                }
                else{
                    maxSeq = 1;
                }
                recnum = arr[i][j+1];
            }
        }

        if(maxSeq >= m){
            mcount++;
        }
        
        int maxSeqCol = 1;
        int recNumCol = arr[0][i];
        for(int k=0; k<n-1; k++){
            if(recNumCol == arr[k+1][i]){
                maxSeqCol += 1;
            }
            else{
                recNumCol = arr[k+1][i];
                if(maxSeqCol >= m){
                    mcount++;
                }
                else{
                    maxSeq = 1;
                }
            }
        }
        if(maxSeqCol >= m){
            mcount++;
        }
    }

    cout << mcount;

    return 0;
}