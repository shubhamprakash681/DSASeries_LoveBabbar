#include<iostream>
using namespace std;

int ansIndex=-1;

bool linSearch_rec(int arr[], int size, int key, int initialSize) {
    if (size == 0) {
        return false;
    }

    if (arr[0] == key) {
        // cout<<"f ";
        ansIndex = initialSize - size;
        return true;
    }
    // cout<<"recCall "<<size<<" ";
    return linSearch_rec(arr+1, size-1, key, initialSize);
}

int main() {
    int arr[10] = {21,433,3,5,35,4,3255,46,12,232};
    int key = 232;
    linSearch_rec(arr, 10, key, 10) ? cout<<key<<" found at index: "<<ansIndex
                    : cout<<key<<" not present";
    return 0;
}