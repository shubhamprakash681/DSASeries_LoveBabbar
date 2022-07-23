#include<iostream>
#include<array>
using namespace std;

int main() {
    int basic[3] = {1,2,3};
    array<int, 4> a = {24, 35, 54, 34};
    int size = a.size();
    for (int i=0; i<size; i++) {
        cout<<a[i]<<" ";
    }
    cout<<"Element at 3rd index = "<<a.at(2)<<endl;
    cout<<"Element at 4rd index = "<<a.at(3)<<endl;

    cout<<"First element= "<<a.front()<<endl;
    cout<<"Last element= "<<a.back()<<endl;
    return 0;
}