#include<iostream>
using namespace std;

int score = 6;

void fun1() {
    cout<<"Value of score in fun1(): "<<score<<endl;
}

void fun2() {
    cout<<"Value of score in fun2(): "<<score<<endl;
}

void fun3() {
    cout<<"Value of score in fun3() before updating: "<<score<<endl;
    score++;
    cout<<"Value of score in fun3() after updating: "<<score<<endl;
}


int main() {
    fun1();
    fun2();
    cout<<"Value of score in main(): "<<score<<endl;

    // global variables are not good to prectice
    // bc. if the value of global var. is changed by any function of the pgm.
    // then this value change will be reflected everywhere
    fun3();
    cout<<"Value of score in main() after being updated by fun3(): "<<score<<endl;

    return 0;
}