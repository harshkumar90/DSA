//P 5 : Check the number is a prime of not a prime number
#include<iostream>
using namespace std;
bool checkPrime(int num){
    if(num<=1){
        return false;
    }
    for(int i=2; i<num; i++){
        if(num%i==0){
            return false;
        }

    }
    return true;
}
int main(){
    bool ans=checkPrime(6);

    if(ans==true){
        cout<<"Prime number";
    }
    else{
        cout<<"NOt a prime number:";

    }
}