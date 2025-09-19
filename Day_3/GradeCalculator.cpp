#include<iostream>
using namespace std;
int main(){
    int per;

    cout<<"\nEnter Percentage: ";
    cin>>per;

    if(per>=90 && per<=100)
        cout<<"\nA Grade (I mean that's a light work for me)";

    else if(per>=80)
        cout<<"\nB Grade (It is what it is)";

    else if(per>=70)
        cout<<"\nC Grade (I can do much better than that)";

    else if(per>=60)
        cout<<"\nD Grade (Pass ho gya na bhai that's all matters)";
        
    else 
        cout<<"\nFail (Ab dekhna bhai iss baar toh pakka comeback hoga) ";
    
    return 0;
}