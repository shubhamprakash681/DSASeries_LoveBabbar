#include<iostream>
using namespace std;

int factorial(int n) {
    // base case
    if (n==0) {
        // return is mandatory for base case
        return 1;
    }

    // else return according to the recursive relation
    return (n*factorial(n-1));
}

int main() {
    int n;
    cin>>n;
    cout<<"factorial of "<<n<<" is: "<<factorial(n);
    return 0;
}