#include<iostream>
#include<deque>
using namespace std;

void printDeque(deque<int> &d) {
    cout<<"Deque d= [";
    for (int i=0; i<d.size(); i++) {
        cout<<d[i];
        if (i<d.size()-1) {
            cout<<", ";
        }
    }
    cout<<"]"<<endl;
}
void printDeque(deque<int> &d, string name) {
    cout<<"Deque "<<name<<"= [";
    for (int i=0; i<d.size(); i++) {
        cout<<d[i];
        if (i<d.size()-1) {
            cout<<", ";
        }
    }
    cout<<"]"<<endl;
}

int main() {
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    d.push_back(3);
    d.push_front(4);
    cout<<"Before popping: ";
    printDeque(d);

    d.pop_back();
    d.pop_front();
    cout<<"After popping: ";
    printDeque(d);

    cout<<"Front element= "<<d.front()<<endl;
    cout<<"Last element= "<<d.back()<<endl;

    // erase()
    d.push_back(23);
    d.push_back(45);
    d.push_front(35);
    cout<<"Before erase: ";
    printDeque(d);
    d.erase(d.begin(), d.begin()+2);
    cout<<"After erase: ";
    printDeque(d);

    cout<<"max_size()= "<<d.max_size()<<endl;
    cout<<"Current size= "<<d.size()<<endl;

    return 0;
}