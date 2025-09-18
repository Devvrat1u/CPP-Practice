#include<iostream>
using namespace std;
int main(){
    int seconds;
    cout<<"Enter time in seconds: ";
    cin>>seconds;

    int hours=seconds/3600;
    seconds%=3600;
    int minutes=seconds/60;
    seconds %= 60;

    cout<<"Time = " <<hours<<" hr "<<minutes<<" min "<<seconds<<" sec"<<endl;

    return 0;
}
