#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void bubbleSort(vector<int>arr, int n){
    // for(int i=0; i<n-1; i++){
    //     for(int j=0; j<n-i-1; j++){
    //         if(arr[j]>arr[j+1]){
    //             swap(arr[j], arr[j+1]);
    //         }
    //     }
    // }
    sort(arr.begin(), arr.end());
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>arr = {64, 34, 25, 12, 22, 11, 90};
    int n = arr.size();
    cout<<"\nSorted array is:";
    bubbleSort(arr, n);
    return 0;
}