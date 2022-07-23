#include<iostream>
#include<math.h>
using namespace std;

int dec2Bin(int n) {
    int bin=0, fac=0;

    while (n!=0) {
        int bit = n&1;
        bin += (bit * pow(10, fac));
        fac++;
        n=n>>1;
    }

    return bin;
}

int main() {
    int n;
    cin>>n;
    cout<<dec2Bin(n);
    return 0;
}