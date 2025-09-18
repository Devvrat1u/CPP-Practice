#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"\nEnter a number: ";
    cin>>a;

    if(a%2==0)
        cout<<"\nEven Number";
    else
        cout<<"\nOdd Number";

    return 0;
}