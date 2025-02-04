#include<iostream>
using namespace std;

int main(){
    cout<<"Hello Rieck_Ace"<<endl;
    int num;
    cout<<"Enter the num: ";
    cin>>num;
    cout<<"The table of "<< num << " is: " <<endl;
    int i=1;
    while(i<=10){
        cout<<num <<" * "<< i << " = "<< num*i <<endl;
        i++;
    }
    return 0;
}