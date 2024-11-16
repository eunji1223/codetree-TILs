#include <iostream>
#include <algorithm>
using namespace std;

class Number{
    public:
        int num, order;

        Number(){}

        Number(int num, int order){
            this->num = num;
            this->order = order;
        }
};

bool compare(const Number &num1, const Number &num2){
    if(num1.num == num2.num){
        return num1.order < num2.order;
    }
    return num1.num < num2.num;
}

int main() {
    int n;
    cin >> n;

    Number numbers[n], numbers_check[n];
    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        numbers[i] = Number(num, i+1);
        numbers_check[i] = Number(num, i+1);
    }

    sort(numbers, numbers+n, compare);

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(numbers_check[i].order==numbers[j].order){
                cout << j+1 << " ";
            }
        }
    }
    
    return 0;
}