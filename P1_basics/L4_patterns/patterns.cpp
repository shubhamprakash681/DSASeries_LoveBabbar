#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    int i=n, j=n;
    while (i>=1) {
        j=n;
        while (j>=1) {
            cout<<j<<" ";
            j--;
        }
        cout<<endl;
        i--;
    }
    cout<<endl;

    int count = 1;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    cout<<endl;

    // triangle star
    for (int i=1; i<n; i++) {
        for (int j=1; j<=i; j++) {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    count = 1;
    for (int i=1; i<n; i++) {
        for (int j=1; j<=i; j++) {
            cout<<count<<" ";
            count++;
        } 
        cout<<endl;
    }
    cout<<endl;

    for (int i=1; i<n; i++) {
        for (int j=1; j<=i; j++) {
            cout<<i+j-1<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for (int i=1; i<=n; i++) {
        for (int j=i; j>=1; j--) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            cout<<char('A' + i - 1) <<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            cout<<char('A' + j - 1) <<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    int add=1;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            cout<<char('A' + add - 1) <<" ";
            add++;
        }
        cout<<endl;
    }
    cout<<endl;

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            cout<<char('A' + i + j - 2)<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    add=0;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            cout<<char('A' + add)<<" ";
            add++;
        }
        cout<<endl;
    }
    cout<<endl;

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            cout<<char('A' + i + j - 2)<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for (int i=n; i>=1; i--) {
        for (int j=1; j<=n-i+1; j++) {
            cout<<char('A' + i + j - 2)<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n-i; j++) {
            cout<<"  ";
        }
        for (int j=1; j<=i; j++) {
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i-1; j++) {
            cout<<"  ";
        }
        for (int j=n-i+1; j>=1; j--) {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n-i; j++) {
            cout<<"  ";
        }
        for (int j=1; j<=i; j++) {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for (int i=1; i<=n; i++) {
        for (int j=1; j<i; j++) {
            cout<<"  ";
        }
        for (int j=i;j<=n; j++) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n-i; j++) {
            cout<<"  ";
        }
        for (int j=1; j<=i; j++) {
            cout<<j<<" ";
        }
        for (int j=i-1; j>=1; j--) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n-i+1; j++) {
            cout<<j<<" ";
        }
        for (int j=1; j<i; j++) {
            cout<<"* * ";
        }
        for (int j=n-i+1; j>=1; j--) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}