#include<iostream>
using namespace std;
int main(){

    int arr1 [] = {1, 2, 5, 1,5, 2, 2, 1, 3, 4};
    int arr2 [] = {1,2,3,4,5,15};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    for(int i = 0; i<n2; i++){
        int count = 0;
        for(int j = 0; j<n1; j++){
            if(arr2[i] == arr1[j]){
                count++;
            }
        }
        cout<<"Element "<<arr2[i]<<" occurs "<<count<<" times."<<endl;
    }
    return 0;
}