#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n1,n2;
    cout<<"Enter 2 numbers: ";
    cin>>n1>>n2;

    int g = max(n1,n2);
    int s = min(n1,n2);
    int LCM = 0;
    for( int i = g ; ; i+=g){
        if(i % s == 0){
            LCM = i;
        }
    }
    cout<<"The LCM of given numbers "<< n1 << " and " << n2 << " is :" << LCM;

    return 0;;
}