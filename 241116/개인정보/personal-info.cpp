#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Info{
    public:
        string name;
        int height;
        float weight;

        Info(string name, int height, float weight){
            this->name = name;
            this->height = height;
            this->weight = weight;
        }

        Info(){}

        void Print(){
            cout << name << " " << height << " ";
            cout << fixed;
            cout.precision(1);
            cout << weight << endl;
        }

};

bool compare1(const Info &info1, const Info &info2){
    return info1.name < info2.name;
}

bool compare2(const Info &info1, const Info &info2){
    return info1.height > info2.height;
}

int main() {
    Info infos[5];
    for(int i=0; i<5; i++){
        string name;
        int height;
        float weight;
        cin >> name >> height >> weight;

        infos[i] = Info(name, height, weight);
    }

    sort(infos, infos+5, compare1);
    cout << "name" << endl;
    for(int i=0; i<5; i++){
        infos[i].Print();
    }

    sort(infos, infos+5, compare2);
    cout << endl;
    cout << "height" << endl;
    for(int i=0; i<5; i++){
        infos[i].Print();
    }


    return 0;
}