#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int sum;
    cout<<"Enter the sum: ";
    cin>>sum;
    int arr[n];
    cout<<"Enter the elements in array: ";

    for(int i = 0; i< n; i++){
        cin>>arr[i];
    }

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(arr[i] + arr[j] == sum){
                cout<<"True";
            break;
            }
        }
    }
    cout<<"False";
  return 0;

}