#include<iostream>
using namespace std;

bool isPalin_rec(string str, int s, int e) {
    if (s<=e) {
        if (str[s] != str[e]) {
            return false;
        }
        return isPalin_rec(str, s+1, e-1);
    }

    return true;
}

int main() {
    string str;
    cin>>str;
    cout<<isPalin_rec(str, 0, str.size()-1);
    return 0;
}