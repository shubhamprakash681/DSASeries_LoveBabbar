#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int n) {
    for (int i=2; i<=sqrt(n); i++) {
        if (n%i==0) {
            return false;
        }
    }
    return true;
}

int main() {
    int a = 4;
    int b = 6;

    // bitwise operators
    cout<<" a&b = "<<(a&b)<<endl;
    cout<<" a|b = "<<(a|b)<<endl;
    cout<<" ~a = "<<(~a)<<endl;
    cout<<" a^b = "<<(a^b)<<endl;

    // left & right shifts
    cout<<"(17>>1) = "<<(17>>1)<<endl;
    cout<<"(17>>2) = "<<(17>>2)<<endl;
    cout<<"(17<<1) = "<<(17<<1)<<endl;
    cout<<"(17<<2) = "<<(17<<2)<<endl;

    // increment/decrement operators
    // a++, a--, -> post inc/dec
    // ++a, --a, -> pre inc/dec

    // for loop
    // for (initialize, condition, operation) 
    int n, sum=0;
    cout<<"Enter n: ";
    cin>>n;
    for (int i=1; i<=n; i++) {
        sum+=i;
    }
    cout<<"Sum of numbers from 1 to " << n <<" = " << sum << endl;

    int i=1;
    sum=0;
    for (;;) {
        if (i<=n) {
            sum+=i;
        } else {
            break;
        }
        i++;
    }
    cout<<"Sum of numbers from 1 to " << n <<" = " << sum << endl;

    for (int a=0, b=1; a<=10&&b<=10; a++,b++) {
        cout<<"a="<<a<<" "<<"b="<<b<<endl;
    }

    // fibonacci series
    int n1,t1=0, t2=1;
    cout<<"Enter n: ";
    cin>>n1;
    cout<<"Fibonacci Series having " << n1 << " elements is: " <<endl;
    cout<<"  "<<t1<<" "<<t2<<" ";
    for (int i=3; i<=n1; i++) {
        int temp=t2;
        t2+=t1;
        t1=temp;
        cout<<t2<<" ";
    }
    cout<<endl;

    // prime numbrers upto n:
    int n2;
    cout<<"Enter n: ";
    cin>>n2;
    cout<<"All prime numbers upto "<<n2<<" are: ";
    for (int i=2; i<=n2; i++) {
        if (isPrime(i)) {
            cout<<i<<" ";
        }
    }

    return 0;
}