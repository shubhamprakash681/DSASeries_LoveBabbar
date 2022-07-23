#include<iostream>
#include<vector>
using namespace std;
// Mark every no. as prime no.
// Then start iterating, whwnever find a prime no., make all its multiples not a prime no.

// to count no. of prime numbers in a range

int main() {
    int n;
    cin>>n;
    int count = 0;

    vector<bool> isPrime(n+1, true);
    // isPrime[0] -> -1
    // isPrime[1] -> 1
    // make both as unprime
    for (int i=2; i<n; i++) {
        if (isPrime[i]) {
            count++;

            for (int j=i*2; j<n; j=j+i) {
                isPrime[j] = false;
            }
        }
    }

    cout<<"No of prime numbers between 0 and "<<n<<" = "<<count<<endl;
    return 0;
}