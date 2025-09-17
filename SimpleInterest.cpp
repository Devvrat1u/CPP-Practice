#include<iostream>
using namespace std;
int main(){
    int p;
    float r,t,si;

    cout<<"\nEnter Principle: ";
    cin>>p;
    cout<<"\nEnter Rate: ";
    cin>>r;
    cout<<"\nEnter Time: ";
    cin>>t;

    si=p*r*t/100;

    cout<<"Simple Interst: "<<si;
}