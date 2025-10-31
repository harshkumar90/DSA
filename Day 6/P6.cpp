//P 6 : Check the number is even or odd
#include<iostream>
using namespace  std;

bool checkEvenOdd(int num){
    if(num%2==0){
        return true;
    }
    else {
        return false;
    }
}

int main(){
    int a; 
    cin>>a;
    bool ans=checkEvenOdd(a);
      if(ans==true){
        cout<<"Even number"<<endl;

      }
      else{
        cout<<"Odd number"<<endl;
      }
      return 0;
}