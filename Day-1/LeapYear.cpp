#include<iostream>
using namespace std;

int main(){
    int y;
    cout<<"Enter the year: ";
    cin>>y;
    cout<<"The year "<<y<<(((y%4==0 && y%100!=0)||y%400==0)?" is":" is not")<<" a leap year.";
    return 0;
}