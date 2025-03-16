#include<iostream>
using namespace std;

int print(int * arr[], int m, int n){
    int index = -1;
    int maxCount = 0;

    for(int i = 0; i < m; i++){
        int count = 0;
        for(int j =0; j<n; j++){
            if(arr[i][j] == 1){
                count++;
            }
        }
        if(count > maxCount){
            maxCount = count;
            index = i;
        }
    }
    return index;
}

int main(){
int m,n;
cin>>m>>n;
int *arr[m];

 cout<<"Enter the elements of matrix:\n";
    for(int i = 0; i<m; i++){
        arr[i] = new int[n];
        for(int j = 0; j<n; j++){
            cin>>arr[i][j];
        }          
    }
    cout<<"Last occurrence with highest 1 is: "<<print(arr,m,n);

    return 0;
}