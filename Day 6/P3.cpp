//Q : Find the maximum of three numbers
#include <iostream>
using namespace std;

void findMaxNumber(int num1,int num2,int num3){
    if(num1>=num2 && num1>=num3){
        cout<<"Maximum number is : "<<num1<<endl;

    }
    else if(num2>=num1 && num2>=num3){
        cout<<"Maximum number is :  "<<num2<<endl;

    }else{
        cout<<"Maximum number is " <<num3<<endl;

    }
    
   
}
//Builtin method max(num1,num2)
    void buildinmethod(int num1,int num2,int num3){
        int ans =max(num1,num2);
        int finalAnss=max(ans,num3);
        cout<<"max is "<<finalAnss<<endl;
    }
 int main(){
        findMaxNumber(9,7,3);
    }