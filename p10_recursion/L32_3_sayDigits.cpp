#include<iostream>
#include<vector>
using namespace std;

string sayDigit(int digit) {
    switch(digit) {
        case 0:
            return " Zero";
        case 1:
            return " One";
        case 2:
            return " Two";
        case 3:
            return " Three";
        case 4:
            return " Four";
        case 5:
            return " Five";
        case 6:
            return " Six";
        case 7:
            return " Seven";
        case 8:
            return " Eight";
        case 9:
            return " Nine";
    }

    return "";
}

void sayDigits(int n) {
    vector<int> digits;

    if (n==0) {
        return;
    }

    int digit = n%10;
    n/=10;
    sayDigits(n);

    cout<<" "<<sayDigit(digit);
}

int main() {
    int n;
    cin>>n;
    sayDigits(n);
    return 0;
}