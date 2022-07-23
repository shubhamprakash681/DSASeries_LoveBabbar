#include<iostream>
using namespace std;

int sumRec(int arr[], int size) {
    if (size == 0) {
        return 0;
    }

    if (size == 1) {
        return arr[0];
    }

    return arr[0] + sumRec(arr+1, size-1);
}

int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    cout<<sumRec(arr, 10);
    return 0;
}