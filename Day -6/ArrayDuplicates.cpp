#include <bits/stdc++.h>
using namespace std;

void allDuplicates(int n, vector<int> &arr) {
    // Write Your code here and print output here
    sort(arr.begin(), arr.end());
    vector<int>ans;
    
    for(int i = 0; i < n-1; i++){
        if(arr[i] == arr[i+1]){
            ans.push_back(arr[i]);
        }    
    } 
    sort(ans.begin(), ans.end());
    for(int i = 0; i<ans.size(); i++){
        if(ans[i] != ans[i+1]){
            cout<<ans[i]<<" ";
        }
    }
}
int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }  
    allDuplicates(n, arr);
    return 0;
}