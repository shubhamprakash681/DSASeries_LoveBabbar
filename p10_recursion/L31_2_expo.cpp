#include<iostream>
using namespace std;

double myPow(int base, int expo) {
    if (expo == 0) {
        return 1;
    }

    return base*myPow(base, expo-1);
}

int main() {
    int base, expo;
    cin>>base>>expo;
    cout<<"Value of "<<base<<" to the power of "<<expo<<" is: "<<myPow(base, expo);
    return 0;
}