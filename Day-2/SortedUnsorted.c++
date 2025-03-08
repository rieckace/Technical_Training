#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int *arr = new int[n];


    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }


    int i = 0;

    for( i = 1; i < n; i++){
    if(arr[i-1] > arr[i]){
        cout<<"Unsorted Array";
        break;
    }
    }
    if(i == n) cout<<"The array is sorted.";
    
    return 0;
}