#include<iostream>
#include<vector>
using namespace std;

int binSearch_rec(int arr[], int s, int e, int key) {
    if (s>e) {
        return -1;
    }

    int mid = s+(e-s)/2;
    if (arr[mid] == key) {
        return mid;
    }

    if (key > arr[mid]) {
        return binSearch_rec(arr, mid+1, e, key);
    }

    return binSearch_rec(arr, s, mid-1, key);
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr)/ sizeof(arr[0]);

    for (int i=0; i<n; i++) {
        int k = arr[i];
        cout<<" "<<binSearch_rec(arr, 0, n-1, k);
    }
    
    return 0;
}