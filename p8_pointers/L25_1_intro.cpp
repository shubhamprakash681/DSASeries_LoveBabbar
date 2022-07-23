#include<iostream>
using namespace std;

int main() {
    int num=5;
    cout<<num<<endl;
    cout<<"Address of num is: "<<&num<<endl;

    int *p = &num;
    cout<<"Address pointed by pointer p: "<<p<<endl;
    cout<<"Data at mem. address pointed by pointer p: "<<*p<<endl;

    // never define any pointer that is not pointing to any variable
    // by default, it can assign it any garbage address
    // that can access any memory address which is not inside the pgm.

    // so use null pointer in such scenario
    // null pointer
    int *ptr=nullptr;
    cout<<"Mem. address pointed by nullptr: "<<ptr<<endl;
    // cout<<"Val at mem. address pointed by nullptr: "<<*ptr<<endl;
    // gives segmentation fault

    double d = 75.86;
    double *p2=&d;
    cout<<"Address pointed by pointer p2: "<<p2<<endl;
    cout<<"Data at mem. address pointed by pointer p2: "<<*p2<<endl;

    // sizeof ptr variables
    cout<<"Size of int var: "<<sizeof(num)<<endl;
    cout<<"Size of int pointer: "<<sizeof(p)<<endl;
    cout<<"Size of double pointer: "<<sizeof(p2)<<endl;
    // pointer of all object types is of 8-bytes




    int a1=5;
    int b1=a1;
    b1++;
    cout<<"a1= "<<a1<<" b1= "<<b1<<endl;


    // pointer arithenmetic
    int *t = &a1;
    (*t)++;
    cout<<a1<<endl;
    cout<<"Address pointed by t bef. incrementing: "<<t<<endl;
    t = t+1;
    cout<<"Address pointed by t aft. incrementing: "<<t<<endl;


    return 0;
}