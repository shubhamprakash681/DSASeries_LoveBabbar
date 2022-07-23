#include<bits/stdc++.h>
using namespace std;

// int largest_embeded_nxn_matrix(vector<int> brick_arr) {
//     int ans=0;
//     for (int i=0; i<brick_arr.size(); i++) {
//         int ch = brick_arr[i];
//         int j;
//         for (j=i; (j<i+ch && j<brick_arr.size()); j++) {
//             cout<<ch<<" "<<i<< " "<<j<<" "<<brick_arr[i]<<" "<<brick_arr[j]<<endl;
//             if (brick_arr[j] > ch) {
//                 break;
//             }
            
//         }
//         if (j== (i+ch)) {
//             ans = max(ans, ch);
//         }

//         for (j=i; (j>i-ch && j>=0); j--) {
//             cout<<ch<<" "<<i<< " "<<j<<" "<<brick_arr[i]<<" "<<brick_arr[j]<<endl;
//             if (brick_arr[j] > ch) {
//                 break;
//             }
            
//         }
//         if (j== (i-ch)) {
//             ans = max(ans, ch);
            
//         }
//     }

//     return ans;
// }

int largest_embeded_nxn_matrix(vector<int> brick_arr) {
    int cMax = 0;
    for (int i=0; i<brick_arr.size(); i++) {
        int tMax=1;
        int j=i+1;
        while (j<brick_arr.size() && brick_arr[j]<=brick_arr[i] && brick_arr[j]<=brick_arr[j-1]) {
            tMax++;
            j++;
        }

        cMax = max(tMax, cMax);
    }
    return cMax;
}

int main() {
    int n;
    cin>>n;
    vector<int> brick_arr;
    for (int i=0; i<n; i++) {
        int h;
        cin>>h;
        brick_arr.push_back(h);
    }
    cout<<largest_embeded_nxn_matrix(brick_arr);
    return 0;
}