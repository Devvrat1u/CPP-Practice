#include<iostream>
using namespace std;
int main(){
    int age;

    cout<<"\nEnter Your Age: ";
    cin>>age;

    if(age>=18)
        cout<<"\nYou are ELIGIBLE for vote";

    else 
        cout<<"\nYour are not ELIGIBLIE for vote";
    
    return 0;

}