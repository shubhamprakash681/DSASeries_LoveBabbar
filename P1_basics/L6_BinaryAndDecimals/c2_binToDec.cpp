#include<iostream>
#include<math.h>
using namespace std;

int bin2Dec(int bin) {
    int dec = 0, fac=0;
    while (bin != 0) {
        int bit = bin%10;
        dec += (bit * pow(2, fac));
        fac++;
        bin/=10;
    }

    return dec;
}

int main() {
    int bin;
    cin>>bin;
    cout<<bin2Dec(bin);
    return 0;
}