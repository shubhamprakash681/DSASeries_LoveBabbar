#include<iostream>
using namespace std;

void bubbleSort_rec(int arr[], int s, int e) {
    // base case
    if (s==e) {
        return;
    }

    int maxElInd=-1;
    int currMaxEl = INT_MIN;
    for (int i=s; i<=e; i++) {
        if (arr[i] > currMaxEl) {
            currMaxEl = arr[i];
            maxElInd = i;
        }
    }
    swap(arr[e], arr[maxElInd]);
    return bubbleSort_rec(arr, s, e-1);
}

int main() {
    int arr[10] = {24, 64, 44 ,546, 466, -23, 53, 545, -134, 3554};
    bubbleSort_rec(arr, 0, 9);

    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i=0; i<n; i++) {
        cout<<" "<<arr[i];
    }
    return 0;
}