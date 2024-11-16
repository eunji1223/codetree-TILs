#include <iostream>
#include <algorithm>
using namespace std;

class Student{
    public:
        int height, weight, number;

        Student(int h, int w, int n){
            height = h;
            weight = w;
            number = n;
        }

        Student(){}

        void Print(){
            cout << height << " " << weight << " " << number << endl;
        }

};

bool compare(const Student &std1, const Student &std2){
    if(std1.height==std2.height){
        if(std1.weight==std2.weight){
            return std1.number < std2.number;
        }
        return std1.weight > std2.weight;
    }
    return std1.height > std2.height;
}

int main() {
    int n;
    cin >> n;

    Student students[n];
    for(int i=0; i<n; i++){
        int h, w;
        cin >> h >> w;
        students[i] = Student(h, w, i+1);
    }
    
    sort(students, students+n, compare);

    for(int j=0; j<n; j++){
        students[j].Print();
    }
    
    return 0;
}