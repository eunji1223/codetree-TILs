#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

class Dot{
    public:
        int x, y, num;

        Dot(){}

        Dot(int x, int y, int num){
            this->x = x;
            this->y = y;
            this->num = num;
        }

        void Print(){
            cout << num << endl;
        }
};

bool compare(const Dot &dot1, const Dot &dot2){
    if((abs(dot1.x) + abs(dot1.y)) == (abs(dot2.x) + abs(dot2.y))){
        return dot1.num < dot2.num;
    }
    return (abs(dot1.x) + abs(dot1.y)) < (abs(dot2.x) + abs(dot2.y));
}

int main() {
    int n;
    cin >> n;

    Dot dots[n];
    for(int i=0; i<n; i++){
        int x, y;
        cin >> x >> y;
        dots[i] = Dot(x, y, i+1);
    }

    sort(dots, dots+n, compare);

    for(int i=0; i<n; i++){
        dots[i].Print();
    }
    
    return 0;
}