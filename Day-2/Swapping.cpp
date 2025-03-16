#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter the value of a and b:\n";
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout<<"Swapped values of a and b :\n";
    cout<<"\na = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    return 0;
}