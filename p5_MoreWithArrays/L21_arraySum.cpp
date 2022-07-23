#include<bits/stdc++.h>
using namespace std;

void printArray(vector<int> &arr) {
    cout<<"[";
    for (int i=0; i<arr.size(); i++) {
        cout<<arr[i];
        if (i != arr.size()-1) {
            cout<<", ";
        }
    }
    cout<<']'<<endl;
}

void reverseArray(vector<int> &arr) {
    int n=arr.size();
    int s=0,e=n-1;
    while (s<=e) {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

void arraySum(vector<int> &arr1, int n, vector<int> &arr2, int m, vector<int> &ans) {
//     assuming that n>=m
    int carry=0;
    int i;
    for (i=0; i<m; i++) {
        int temp = carry + arr1[n-1-i] + arr2[m-1-i];
        int sum = temp % 10;
        ans.push_back(sum);
        carry = temp / 10;
    }

    // cout<<"carry="<<carry<<" ";
    
    if (n==m) {
        // if (carry)
        ans.push_back(carry);
    }else {
        int temp = carry + arr1[n-1-i];
        int sum = temp % 10;
        ans.push_back(sum);
        carry = temp / 10;
        i++;
        while (i<n) {
            int temp = carry + arr1[n-1-i];
            int sum = temp % 10;
            ans.push_back(sum);
            carry = temp / 10;

            // ans.push_back(arr1[n-1-i]);
            i++;
        }
    }
    
    if (ans[ans.size()-1] == 0) {
        ans.pop_back();
    }
    reverseArray(ans);
        
}

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
    
    vector<int> ans;
    if (n>=m) {
        arraySum(a, n, b, m, ans);
    } else {
        arraySum(b, m, a, n, ans);
    }
    
    return ans;
}

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, m;
        cin>>n>>m;
        vector<int> a, b;
        for (int i=0; i<n; i++) {
            int t;
            cin>>t;
            a.push_back(t);
        }

        for (int i=0; i<m; i++) {
            int t;
            cin>>t;
            b.push_back(t);
        }

        vector<int> arraySum;
        arraySum = findArraySum(a, n, b, m);
        printArray(arraySum);

    }
    return 0;
}