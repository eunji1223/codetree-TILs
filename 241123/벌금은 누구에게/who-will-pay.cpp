#include <iostream>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    int fund = -1;
    int student[n] = { k, };
    for(int i=0; i<m; i++){
        int student_num;
        cin >> student_num;

        student[student_num-1]--;
        if(student[student_num-1] <= 0){
            fund = student_num;
            break;
        }
    }

    cout << fund;

    return 0;
}