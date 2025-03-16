#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int arr[] = {1,1,2,3,4,4,2,5,6,6,7};
    int query[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxelement = *max_element(arr,arr+n);
    
    int hash[maxelement+1] = {0};
    for(int i = 0; i<n; i++){
        hash[arr[i]]++;
    }

    for(int i : query){
        cout<<"Element "<<i<<" occurs "<<hash[i]<<" time(s)."<<endl;
    }
    return 0;
}