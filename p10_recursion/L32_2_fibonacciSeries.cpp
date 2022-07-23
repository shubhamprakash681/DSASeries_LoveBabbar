#include<iostream>
using namespace std;

int n1=0, n2=1, n3=1;
void printFibonacciSeries(int n) {
    if (n==0) {
        return;
    }

    cout<<" "<<n1;
    n3 = n1+n2;
    n1=n2;
    n2=n3;
    printFibonacciSeries(n-1);
}

int main() {
    int n;
    cin>>n;

    printFibonacciSeries(n);
    return 0;
}