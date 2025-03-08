
#include <bits/stdc++.h>

using namespace std;
int solve(vector <int> vec,int limit)
{
    //Write your code here
    int count = 0;
    int n = vec.size();
    
    sort(vec.begin(), vec.end());
    int l = 0, h = n-1;
    while(l <= h){
        if(vec[l] + vec[h] <= limit ){
            l++;   
        }
        h--;
        count++;
    }
    return count;
}
int main()
{
    int n,m;cin>>n>>m;
    vector <int> vec(n);
    for (int i=0;i<n;i++)cin>>vec[i];
    cout<<solve(vec,m);
    return 0;
}