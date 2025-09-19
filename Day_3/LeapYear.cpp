#include<iostream>
using namespace std;
int main(){
    int year;

    cout<<"\nEnter a year: ";
    cin>>year;

    if (year%400==0 || (year%4==0 && year%100!=0))
        cout<<"\nLeap Year !!! ";

    else
        cout<<"\nNot a Leap Year ";

    return 0;
    
}