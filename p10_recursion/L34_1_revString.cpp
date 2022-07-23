#include<iostream>
using namespace std;

void revString_rec(string &str, int s, int e) {
    if (s>=e) {
        return;
    }

    swap(str[s], str[e]);
    revString_rec(str, s+1, e-1);
}

int main() {
    string str;
    cin>>str;
    revString_rec(str, 0, str.size()-1);
    cout<<str<<endl;
    return 0;
}