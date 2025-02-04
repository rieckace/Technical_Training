#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the num: ";
    cin>>num;
    int a =0, b=1;
    int fibo;
    cout<<"The fibonacci of "<< num << " is :";
    cout<< 0 <<" "<< 1<< " ";
    for(int i = 2 ; i<= num; i++){
        fibo = a+b;
        a = b;
        b = fibo;
        cout<<fibo<<" ";
    }
    
    
    return 0;
}