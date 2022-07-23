#include <iostream>
#include<vector>
#define ll long long int
using namespace std;

void rotate(vector<ll>& nums, int k) {
    vector<ll> tv={nums};
    int n=nums.size();
    
    int ep=n-(k%n);
    int baseIndex=0;
    
    for (int i=ep; i<n; i++) {
        nums[baseIndex] = tv[i];
        baseIndex++;
    }

    for (int i=0; i<ep; i++) {
        nums[baseIndex]=tv[i];
        baseIndex++;
    }
        
}

int main() {
    //Write your code here
    int n;
    cin>>n;
    vector<ll> arr;
    for (int i=0; i<n; i++) {
        ll ip;
        cin>>ip;
        arr.push_back(ip);
    }
    
    int k;
    cin>>k;
    
    rotate(arr, k);
    
    for (int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}