#include<iostream>
using namespace std;

void revCount(int n) {
    if (n==-1) {
        return;
    }

    cout<<" "<<n;
    return revCount(--n);
}

int main() {
    int n;
    cin>>n;
    revCount(n);
    return 0;
}