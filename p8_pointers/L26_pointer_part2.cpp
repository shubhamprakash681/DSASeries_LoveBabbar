#include<iostream>
using namespace std;

int main() {
    int arr[10];
    for (int i=0; i<10; i++) {
        arr[i] = i+1;
    }
    cout<<"Address of first mem. block: "<<arr<<endl;
    cout<<"Address of first mem. block: "<<&(arr[0])<<endl;

    // dereferencing arr
    cout<<"Element at zeroth index: "<<*arr<<endl;

    cout<<"Address of second mem. block: "<<(arr+1)<<endl;
    cout<<"Address of second mem. block: "<<&(arr[1])<<endl;
    // dereferencing arr
    cout<<"Element at first index: "<<*(arr+1)<<endl;


    return 0;
}