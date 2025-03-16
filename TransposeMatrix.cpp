#include<iostream>
using namespace std;
#include<algorithm>

int main(){
    int r,c;
    cin>>r>>c;

    int arr[r][c];
    // int res[r][c];

    for(int i =0 ; i<r; i++){
        for(int j = 0; j< c; j++){
            cin>>arr[i][j];
        }
    }

    //  for(int i = 0 ; i<r; i++){
    //     for(int j = 0; j< c; j++){
    //         // res[j][i] = arr[i][j];
    //         swap(arr[i][j], arr[j][i]);
    //     }
    // }
    cout<<"\nOriginal matrix is:\n";
     for(int i = 0 ; i<r; i++){
        for(int j = 0; j< c; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\nTransposed matrix is:\n";
     for(int i = 0 ; i<r; i++){
        for(int j = 0; j< c; j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}