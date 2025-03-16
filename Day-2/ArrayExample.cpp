#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"\nEnter the size of the array: ";
    cin>>size;

    // int arr[size];  //Static initialization
    int *arr = new int[size]; //Dynamic declaration
    cout<<endl;


    // Prompting user to give input
    cout<<"Enter the array elements: ";
    for(int i =0; i<size;i++){
        cin>>arr[i];
    }
    
    // printing the elements
    // cout<<"The entered array elements are: ";
    // for(int i = 0; i < size;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    // Reverse the array elements
    // cout<<"\nReversed array is:\n";
    // for(int i = size-1; i>=0; i--){
    //     cout<<arr[i]<<" ";
    // }

    // Reversing the array
    // for(int i = 0, j= size-1; i<j;i++, j--){
    //     swap(arr[i], arr[i])
    //     cout<<arr[i]<<" ";
    // }
    // int i = 0;
    // int j = size-1;
    // while(i<j){
    //     swap(arr[i], arr[j]);
    //     i++;
    //     j--;
    // }

    // code to reverse the array
    for(int i = 0; i<size/2; i++){
        swap(arr[i], arr[size-1-i]);
    }
    // Time Complexity = O(n) to reverse the array

    cout<<"Reversed Array is: \n";
    for(int i = 0; i< size; i++){
        cout<<arr[i]<<" ";

    }
    return 0;
    
}