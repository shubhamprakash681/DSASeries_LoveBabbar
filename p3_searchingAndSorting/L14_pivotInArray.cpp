#include<iostream>
using namespace std;

int findPivotElement(int arr[], int n) {
    int s=0;
    int e=n-1;
    while (s<e) {
        int m = s+(e-s)/2;
        if (arr[m] >= arr[0]) {
            s=m+1;
        }else {
            e=m;
        }
    }

    return arr[s];
}

int main() {
    int arr[5] = {8, 10, 17, 1, 3};
    cout<<"Pivot element is: "<<findPivotElement(arr, 5)<<endl;
    return 0;
}