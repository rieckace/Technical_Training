#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void insertionSort(vector<int>arr, int n){
    // outer loop to traverse the array
    for(int i = 1; i<n; i++){
        // inner loop to compare the element with the previous elements
        // if the element is smaller than the previous element, swap them
        for(int j = i; j>0; j--){
            
            // if the element is smaller than the previous element, swap them
            // if the element is greater than the previous element, break the loop
            if(arr[j]<arr[j-1]){
                swap(arr[j], arr[j-1]);
            }
            else{
                break;
            }
        }
        cout<<"\nSorted Array is: ";
        for(int num: arr){
            cout<<num<<" ";
        }
        cout<<endl;
    }
}

int main(){
    vector<int> arr = {13, 61, 8, 2, 4, 6, 4, 10 };
    int n = arr.size();
    insertionSort(arr,n);
    return 0;  

}
