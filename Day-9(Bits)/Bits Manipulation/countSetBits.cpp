#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int count = 0;
    while(n != 0){
        
        // This is the Brian Kernighan's Algorithm to count the number of set bits in a number
        // n = n & (n-1);
        // count++;
        if(n & 1){
            count++;
        }
        n = n >> 1;
    }
    
    cout<<"Number of set bits in "<<n<<" is "<<count<<endl;
    return 0;
}
