#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void selectionSort(vector<int> arr, int n){
    for(int i=0; i<n-1; i++){
        int minIndex = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> arr = {13, 61, 8, 2, 4, 6, 4, 10 };
    int n = arr.size();
    // Selection Sort
    cout<<"\nSorted array is:";
    selectionSort(arr, n);
    return 0;
}