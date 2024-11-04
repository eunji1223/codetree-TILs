#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string &str){
    for(int i=0; i<str.length()/2; i++){
        if(str[i]!=str[str.length()-i-1]){
            return false;
        }
    }
    return true;
}

int main() {
    string str;

    cin >> str;

    if(isPalindrome(str)){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    return 0;
}