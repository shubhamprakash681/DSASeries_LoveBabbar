#include<iostream>
using namespace std;

int main() {
    int totalAmount = 1330;
    int noOfNotes[4];   //100, 50, 20, 1
    int i=0;
    while (totalAmount != 0 && i <= 3) {
        switch (i) {
            case 0: {
                noOfNotes[i] = totalAmount/100;
                totalAmount -= (noOfNotes[i]*100);
                i++;
                break;
            }
            case 1: {
                noOfNotes[i] = totalAmount/50;
                totalAmount -= (noOfNotes[i]*50);
                i++;
                break;
            }
            case 2: {
                noOfNotes[i] = totalAmount/20;
                totalAmount -= (noOfNotes[i]*20);
                i++;
                break;
            }
            case 3: {
                noOfNotes[i] = totalAmount/1;
                totalAmount -= (noOfNotes[i]*1);
                i++;
                break;
            }
        }
    }

    i=0;
    while (i<4) {
        switch (i) {
            case 0: {
                cout<<"Number of " << 100 << " rupee notes = " << noOfNotes[i]<<endl;
                i++;
                break;
            }
            case 1: {
                cout<<"Number of " << 50 << " rupee notes = " << noOfNotes[i]<<endl;
                i++;
                break;
            }
            case 2: {
                cout<<"Number of " << 20 << " rupee notes = " << noOfNotes[i]<<endl;
                i++;
                break;
            }
            case 3: {
                cout<<"Number of " << 1 << " rupee notes = " << noOfNotes[i]<<endl;
                i++;
                break;
            }
        }
    }
    return 0;
}