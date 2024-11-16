#include <iostream>
#include <algorithm>
using namespace std;

class Student{
    public:
        int weight, height, num;

        Student(){}

        Student(int height, int weight, int num){
            this->height = height;
            this->weight = weight;
            this->num = num;
        }

        void Print(){
            cout << height << " " << weight << " " << num << endl;
        }
};

bool compare(const Student &std1, const Student &std2){
    if(std1.height == std2.height){
        return std1.weight > std2.weight;
    }
    return std1.height < std2.height;
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

    for(int i=0; i<n; i++){
        students[i].Print();
    }

    return 0;
}