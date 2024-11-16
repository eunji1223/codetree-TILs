#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class Info{
    public:
        string name;
        int height, weight;

        Info(){}

        Info(string name, int height, int weight){
            this->name = name;
            this->height = height;
            this->weight = weight;
        }

        void Print(){
            cout << name << " " << height << " " << weight << endl;
        }
};

bool compare(const Info &info1, const Info &info2){
    if(info1.height==info2.height){
        return info1.weight > info2.weight;
    }
    return info1.height < info2.height;
}

int main() {
    int n;
    cin >> n;

    Info infos[n];
    for(int i=0; i<n; i++){
        string name;
        int height, weight;
        cin >> name >> height >> weight;

        infos[i] = Info(name, height, weight);
    }

    sort(infos, infos+n, compare);

    for(int i=0; i<n; i++){
        infos[i].Print();
    }

    return 0;
}