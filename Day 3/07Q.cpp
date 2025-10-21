//Prime or not
#include<iostream>
using namespace std;
 
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    if(n<2){
        cout<<"not a prime number";
    }
    // else if (n%2==0){
    //     cout<<"is a prime number";
    // }
    else{
        for (int i=2; i<n; i=i+1){
         if(n%i ==0){
            cout<<n<<"is not a prome number'\n'";

         }
         cout<<n<<"is a prime number";
        }
    }
}