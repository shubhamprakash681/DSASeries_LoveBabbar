#include<iostream>
using namespace std;

// a piece of code in pgm will be replaced by the value of macro while compiling
// macro -> #define
// eg:-
#define PI 3.14
#define ll long long int

int main() {
    int r = 23;
    cout<<"Area of circle is: " << PI*r*r<<endl;

    cout<<"sizeof(ll): "<<sizeof(ll)<<"-bytes"<<endl;
    cout<<"sizeof(double): "<<sizeof(double)<<"-bytes"<<endl;
    return 0;
}