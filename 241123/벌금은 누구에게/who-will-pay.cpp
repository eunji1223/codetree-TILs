#include <iostream>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    int student[n];
    for(int i=0; i<n; i++){
        student[i] = k;
    }

    int fund = -1;
    for(int i=0; i<m; i++){
        int student_num;
        cin >> student_num;

        student_num--;
        student[student_num]--;
        if(student[student_num] <= 0){
            fund = student_num+1;
            break;
        }
    }

    cout << fund;

    return 0;
}