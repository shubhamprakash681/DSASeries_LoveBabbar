#include<iostream>
using namespace std;

long long int merge(long long int arr[], long long int s, long long int e) {
    long long int inversionCount = 0;

    long long int mid = s+(e-s)/2;

    long long int len1=mid-s+1;
    long long int len2 = e-mid;

    //create 2 arrays
    long long int first[len1];
    long long int second[len2];

    long long int k = s;
    // copy elements to both arrays
    for (int i=0; i<len1; i++) {
        first[i] = arr[k];
        k++;
    }
    k=mid+1;
    for (int i=0; i<len2; i++) {
        second[i] = arr[k];
        k++;
    }

    // merge using merge 2 sorted array algo
    k=s;
    long long int ind1 = 0;
    long long int ind2 = 0;

    while (ind1<len1 && ind2<len2) {
        if (first[ind1] <= second[ind2]) {
            arr[k] = first[ind1];
            ind1++;
        }else {
            arr[k] = second[ind2];
            ind2++;
            
            inversionCount += (len1-ind1);
        }
        k++;
    }

    while (ind1<len1) {
        arr[k] = first[ind1];
        k++;
        ind1++;
    }
    while (ind2<len2) {
        arr[k] = second[ind2];
        ind2++;
        k++;
    }

    return inversionCount;
}
  
  
long long int mergeSort(long long int arr[], long long int s, long long int e) {
    long long int mid = s+(e-s)/2;
    long long int inversionCount = 0;
    
    if (s>=e) {
        return inversionCount;
    }
    
    inversionCount += mergeSort(arr, s, mid);
    inversionCount += mergeSort(arr, mid+1, e);
    
    inversionCount += merge(arr, s, e);
    
    return inversionCount;
}

long long int inversionCount(long long arr[], long long N) {
    // Your Code Here
    return mergeSort(arr, 0, N-1);
}

int main() {
    long long int n;
    cin>>n;

    long long int arr[n];
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }

    cout<<inversionCount(arr, n);
    return 0;
}