#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    char name[20];
    cout<<"Enter your name: ";
    cin>>name;  // characters after space, tab, new line or enter will not be taken as input

    cout<<"Your name is "<<name<<endl;

    name[5] = '\0'; // null character
    cout<<"Name with null character at 6th pos: "<<name<<endl;

    // find length of string
    char name2[20];
    cout<<"Enter name again: ";
    cin>>name2;
    int len=0, i=0;
    while (name2[i] != '\0') {
        len++;
        i++;
    }
    cout<<"No. of alphabets in your name is: "<<len<<endl;
    cout<<"Length of charArray name2 is: "<<sizeof(name2)/sizeof(name2[0])<<endl;



    // Reverse a string
    int s=0, e=len-1;
    while (s<=e) {
        swap(name2[s], name2[e]);
        s++;
        e--;
    }
    cout<<"Reverse of your name is: "<<name2<<endl;
    cout<<"Length of charArray name2 is: "<<sizeof(name2)/sizeof(name2[0])<<endl;
    
    
    return 0;
}