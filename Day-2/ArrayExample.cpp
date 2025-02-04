#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;

    // int arr[size];  //Static initialization
    int *arr = new int[size]; //Dynamic declaration
    cout<<endl;


    // Prompting user to give input
    cout<<"\nEnter the array elements: ";
    for(int i =0; i<size;i++){
        cin>>arr[i];
    }
    
    // printing the elements
    cout<<"The entered array elements are: ";
    for(int i =0; i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}