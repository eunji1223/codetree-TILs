#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    int curr_temp = 0;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int s1, e1, s2, e2;
    cin >> s1 >> e1 >> s2 >> e2;

    int mid = n-(e1-s1+1);
    int res = mid - (e2-s2+1);
    int temp[mid], result[res];

    s1--; 
    e1--; 
    s2--; 
    e2--;

    for(int i=0; i<n; i++){
        if(i < s1 || i > e1){
            temp[curr_temp] = arr[i];
            curr_temp++;
        }
    }

    curr_temp = 0;
    for(int j=0; j<n-mid; j++){
        if(j < s2 || j > e2){
            result[curr_temp] = temp[j];
            curr_temp++;
        }
    }

    cout << res << endl;
    for(int i=0; i<res; i++){
        cout << result[i] << endl;
    }


    return 0;
}