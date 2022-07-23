#include<iostream>
#include<vector>
using namespace std;

void printvector(vector<int> &v) {
    cout<<"vector v= [";
    for (int i=0; i<v.size(); i++) {
        cout<<v[i];
        if (i<v.size()-1) {
            cout<<", ";
        }
    }
    cout<<"]"<<endl;
}
void printvector(vector<int> &v, string name) {
    cout<<"vector "<<name<<"= [";
    for (int i=0; i<v.size(); i++) {
        cout<<v[i];
        if (i<v.size()-1) {
            cout<<", ";
        }
    }
    cout<<"]"<<endl;
}

int main() {
    // initialize
    vector<int> v;  //size=0
    vector<int> v1(5, 1);   //{1,1,1,1,1}
    printvector(v1, "v1");
    vector<int> last(v1);   //last[] = v1[]
    printvector(last, "last");

    cout<<v.capacity()<<" "<<v.size()<<endl;

    v.push_back(1);
    cout<<v.capacity()<<" "<<v.size()<<endl;

    v.push_back(2);
    cout<<v.capacity()<<" "<<v.size()<<endl;

    v.push_back(3);
    cout<<v.capacity()<<" "<<v.size()<<endl;

    cout<<"Front element = "<<v.front()<<endl;
    cout<<"Last element = "<<v.back()<<endl;

    // pop to delete last element
    cout<<"Before popping: ";
    printvector(v);
    v.pop_back();
    cout<<"After popping: ";
    printvector(v);
    
    // clear -> on clearing vector, size is made 0, cap. remains unchanged
    cout<<"Before clear: ";
    printvector(v);
    v.clear();
    cout<<"After clear: ";
    printvector(v);
    cout<<"Capacity After clear: "<<v.capacity();
    return 0;
}