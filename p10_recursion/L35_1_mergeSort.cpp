#include<iostream>
using namespace std;

void printArray(int arr[], int n) {
    for (int i=0; i<n; i++) {
        cout<<" "<<arr[i];
    }
}

void merge(int arr[], int s, int e) {
    int mid = s+(e-s)/2;

    int len1 = mid-s + 1;
    int len2 = e-mid;

    int first[len1];
    int second[len2];

    // creating both the arrays
    int k = s;
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
    int ind1=0, ind2=0;
    k=s;
    while (ind1<len1 && ind2<len2) {
        if (first[ind1] <= second[ind2]) {
            arr[k] = first[ind1];
            ind1++;
        }else {
            arr[k] = second[ind2];
            ind2++;
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
        k++;
        ind2++;
    }
    
}

void mergeSort(int arr[], int s, int e) {
    // base case
    if (s>=e) {
        return;
    }

    // RR-
    int mid = s+(e-s)/2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid+1, e);

    merge(arr, s, e);
}

int main() {
    int arr[10] = {24, 64, 44 ,546, 466, -23, 53, 545, -134, 3554};

    int n = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr, 0, n-1);

    printArray(arr, n);
    
    return 0;
}