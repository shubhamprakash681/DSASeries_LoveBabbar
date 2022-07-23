#include<iostream>
using namespace std;

void solveUsingRec(int src, int dest) {
    cout<<"source= "<<src<<", destination= "<<dest<<endl;
    if (src==dest) {
        cout<<"\nPhunch gya";
        return;
    }
    return solveUsingRec(src+1, dest);
}

int main() {
    int src=0;
    int dest;
    cin>>dest;

    solveUsingRec(src, dest);
    return 0;
}