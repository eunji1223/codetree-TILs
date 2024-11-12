#include <iostream>
#include <string>
using namespace std;

string aim_str;
string part_str;

int StartPosition(){
    for(int i=0; i<aim_str.length(); i++){
        if(aim_str[i]==part_str[0]){
            bool complete = true;
            for(int j=1; j<part_str.length(); j++){
                if(aim_str[i+j]!=part_str[j]){
                    complete = false;
                    break;
                }
            }
            if(complete){
                return i;
            }
        }
    }
    return -1;
}

int main() {
    cin >> aim_str >> part_str;
    cout << StartPosition();
    
    return 0;
}