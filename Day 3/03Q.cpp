// Find the simple interest
#include<iostream>
using namespace std;
int main(){
    int p,r,t;
    cout<<"Enter P : R : T : "<<endl;
    cin>>p>>r>>t;
    double SI=(p*r*t)/100;
    cout<<"Simple interest is : "<<SI<<endl;

    return 0;
    
}