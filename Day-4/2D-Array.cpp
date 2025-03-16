
#include<bits/stdc++.h>
using namespace std;

void printArray(int * arr[],int row, int col ){
    cout<<endl;
    cout<<"The array elements are:\n";

    for(int i = 0; i < row;i++){
        for(int j = 0; j<col; j++){
            cout<<arr[i][j]<<" ";
    }
    cout<<endl;
    }
}
int main(){

    int rows, cols;
    cout<<"Enter the number of rows and columns: ";
    cin>>rows>>cols;
    int *arr[rows];

    cout<<"Enter the elements of matrix:\n";
    for(int i = 0; i<rows; i++){
        arr[i] = new int[cols];
        for(int j = 0; j<cols; j++){
            cin>>arr[i][j];
        }          
    }
    printArray(arr,rows,cols);
    return 0;
=======
#include<bits/stdc++.h>
using namespace std;

void printArray(int * arr[],int row, int col ){
    cout<<endl;
    cout<<"The array elements are:\n";

    for(int i = 0; i < row;i++){
        for(int j = 0; j<col; j++){
            cout<<arr[i][j]<<" ";
    }
    cout<<endl;
    }
}
int main(){

    int rows, cols;
    cout<<"Enter the number of rows and columns: ";
    cin>>rows>>cols;
    int *arr[rows];

    cout<<"Enter the elements of matrix:\n";
    for(int i = 0; i<rows; i++){
        arr[i] = new int[cols];
        for(int j = 0; j<cols; j++){
            cin>>arr[i][j];
        }          
    }
    printArray(arr,rows,cols);
    return 0;

}