#include<iostream>
using namespace std;

bool isSorted_rec(int arr[], int n) {
    if (n==0 || n==1) {
        // cout<<"True 1 "<<arr[0]<<endl;
        return true;
    }

    if (arr[0] > arr[1]) {
        // cout<<"False 1 "<<arr[0]<<endl;
        return false;
    }

    // cout<<"True 1 "<<arr[0]<<endl;
    return isSorted_rec((arr+1), (n-1));
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }

    cout<<isSorted_rec(arr, n);
    return 0;
}