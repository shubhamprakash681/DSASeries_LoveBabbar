#include<iostream>
#include<algorithm>
using namespace std;

void printArray(int arr[], int n) {
    cout<<"arr= "<<"[";
    for (int i=0; i<n; i++) {
        if (i==n-1) {
            cout<<arr[i]<<"]"<<endl;
        }else {
            cout<<arr[i]<<", ";
        }
    }
}

int minIndex(int arr[], int n, int start) {
    int minIdx=-1, minEl = INT_MAX;
    for (int i=start; i<n; i++) {
        if (arr[i] < minEl) {
            minIdx = i;
            minEl=arr[i];
        }
    }

    return minIdx;
}

void selecionSort(int arr[], int n) {
    // find minm. element in unsorted array & swap it with the start of unsorted array
    int sortedIndex=-1;

    while (sortedIndex < n-1) {
        int currentMinIndex = minIndex(arr, n, (sortedIndex+1));

        swap(arr[currentMinIndex], arr[sortedIndex+1]);
        sortedIndex++;
    }
}

int main() {
    int arr[10] = {12, 434,121, 53, 1, 5, 45, 65, 766, 6};
    cout<<"Before sorting, ";
    printArray(arr, 10);

    selecionSort(arr, 10);
    cout<<"After sorting, ";
    printArray(arr, 10);

}