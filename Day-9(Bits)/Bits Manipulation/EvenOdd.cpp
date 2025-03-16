#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n&1){
        cout<<n<<" is Odd"<<endl;
    }
    else{
        cout<<n<<" is Even"<<endl;
    }
    return 0;
}