#include<iostream>
using namespace std;
int main(){
    float fahrenheit,celsius;

    cout<<"\nEnter temperature in Celsius: ";
    cin>>celsius;

    fahrenheit=(celsius*9/5)+32;
    
    cout<<"\nTemperature in Fahrenheit : "<<fahrenheit ;

}