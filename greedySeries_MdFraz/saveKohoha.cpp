#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    ll t;
    cin>>t;
    while (t--) {
        ll n, z;
        cin>>n>>z;
        priority_queue<ll> powers;
        ll temp;
        
        for (ll i=0; i<n; i++) {
            cin>>temp;
            powers.push(temp);
        }
        
        ll ans=0;
        
        while (powers.top()>0 && z>0) {
            z-=powers.top();
            temp = powers.top()/2;
            powers.pop();
            powers.push(temp);
            ans++;
        }
        
        if (z>0) {
            cout<<"Evacuate"<<endl;
        }else {
            cout<<ans<<endl;
        }
    }
	return 0;
}
