#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    int block[n];

    for(int i=0; i<n; i++){
        cin >> block[i];
    }

    int s1, e1, s2, e2;

    cin >> s1 >> e1 >> s2 >> e2;

    int mid[n-(e1-s1+1)];
    int end[n-(e1-s1+1)-(e2-s2+1)];

    int mididx = 0;
    for(int i=0; i<s1-1; i++){
        mid[mididx] = block[i];
        mididx += 1;
    }
    for(int i=e1; i<n; i++){
        mid[mididx] = block[i];
        mididx += 1;
    }

    int endidx = 0;
    for(int i=0; i<s2-1; i++){
        end[endidx] = mid[i];
        endidx += 1;
    }
    for(int i=e2; i<(n-(e1-s1+1)); i++){
        end[endidx] = mid[i];
        endidx += 1;
    }

    cout << n-(e1-s1+1)-(e2-s2+1) << endl;
    for(int i=0; i<n-(e1-s1+1)-(e2-s2+1); i++){
        cout << end[i] << endl;
    }

    return 0;
}