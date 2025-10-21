//Factorial of a number
#include<iostream>
using namespace std;

int main(){
    int n,fac=1;
    cout<<"Enter a number to know factorial: ";
    cin>>n;
    if(n<0){
        cout<<"Invalid input";
    }
    else if (n ==0){
        cout<<"Factorial of 0 is : "<<fac;

    }else if(n>0){
        for(int i=1; i<n; i++){
            fac=fac*i;
        }
        cout<<"Factorial of: "<<n<<" is "<<fac;
    }
}