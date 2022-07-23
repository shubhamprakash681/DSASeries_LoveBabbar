#include<iostream>
using namespace std;
#define ll long long int

ll squareRootUsingBS(int n) {
    ll s =0;
    ll e = n;

    ll res = -1;
    while(s<=e){
        ll mid = s + (e-s)/2;
        ll sqr = mid*mid;
        if(sqr == n){
            return mid;
        } else if (sqr > n){
            e=mid-1;
        } else {
            s=mid+1;
            res=mid;
        }
    }
    
    return res;
}

double precisedRoot(int n, ll integerPart, int precision) {
    double factor = 1;
    double ans = double(integerPart);
    for (int i=1; i<=precision; i++) {
        factor/=10;

        for (double j=ans; j*j<n; j+=factor) {
            ans = j;
        }
    }

    return ans;
}


int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    ll integerPart = squareRootUsingBS(n);
    cout<<"Square Root Of "<<n<<" is: "<<precisedRoot(n, integerPart, 3)<<endl; 
    return 0;
}