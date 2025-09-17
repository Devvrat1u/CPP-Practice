#include<iostream>
using namespace std;
int main(){
    int a,b;

    cout<<"\nEnter a 1st number : ";
    cin>>a;

    cout<<"\nEnter a 2nd number : ";
    cin>>b;

    cout<<"\n-------Before Swap-------";
    cout<<"\nA = "<<a;
    cout<<"\nB = "<<b;
    
    a=a+b;
    b=a-b;
    a=a-b;

    cout<<"\n-------After Swap-------";
    cout<<"\nA = "<<a;
    cout<<"\nB = "<<b;
}