#include<iostream>
using namespace std;

int recursiveSum(int n){
    if(n==0){
        return 0;
    }
    return n+recursiveSum(n-1);
}

int main(){
    int num;
    cout<<"Enter the num: ";
    cin>>num;
   
    // Method 1: Using formula
    cout<<"\nUsing formula method:"<<endl;
    cout<<"The sum of first "<< num <<" natural numbers is: "<<num*(num+1)/2<<endl;
    
    // Method 2: Using iteration
    int sum = 0;
    for(int i = 1; i <= num; i++) {
        sum += i;
    }
    cout<<"\nUsing iterative method:"<<endl;
    cout<<"The sum of first "<< num <<" natural numbers is: "<<sum;

    cout<<"\n\nUsing recursive method:"<<endl;
    cout<<"The sum of first "<< num <<" natural numbers is: "<<recursiveSum(num);
    
    return 0;
}


