#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int start = 0;
    int end = n-1;
    while (start <= end) {
        int mid = start + (end - start)/2;
        
        if (arr[mid] == key) {
            return mid;
        }else if (arr[mid] < key) {
            start = mid+1;
        }else {
            end = mid-1;
        }
    }

    return -1;
}

int main() {
    int even[6] = {2,24,123,345,435,464};
    int odd[7] = {2,24,34,35,100,230,446};

    cout<<binarySearch(even, 6, 24)<<endl;
    cout<<binarySearch(even, 6, 435)<<endl;
    cout<<binarySearch(even, 6, -10)<<endl;

    cout<<binarySearch(odd, 7, 446)<<endl;
    cout<<binarySearch(odd, 7, 500)<<endl;
    return 0;
}