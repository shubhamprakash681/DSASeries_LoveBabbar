#include<iostream>
using namespace std;

// gcd(a, b) = gcd(a-b, b)

int gcd(int a, int b) {
    if (a==0) {
        return b;
    }
    if (b==0) {
        return a;
    }

    while (a!=b) {
        if (a>b) {
            a-=b;
        }else {
            b-=a;
        }
    }

    return a;

}

// lcm(a, b) = (a*b)/gcd(a, b)
int lcm(int a, int b) {
    return (a*b)/gcd(a, b);
}

int main() {
    int a, b;
    cin>>a>>b;

    cout<<"GCD= "<<gcd(a, b)<<endl;
    cout<<"LCM= "<<lcm(a, b)<<endl;

    return 0;
}