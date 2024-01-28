#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int info[n][n];

    int max = 0;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> info[i][j];
        }
    }    

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i+2 < n && j+2 < n){
                int count = 0;
                for(int k=i; k<=i+2; k++){
                    for(int h=j; h<=j+2; h++){
                        count += info[k][h];
                    }
                }
                if(count>max){
                    max = count;
                }
            }
            else{
                continue;
            }
        }
    }

    cout << max;

    return 0;
}