// Q Write a function to print sum of 3 numbers
#include<iostream>
using namespace std;
void sum(int num1,int num2, int num3){
    int result=num1+num2+num3;
    cout<<"Sum of three numbers is : "<<result<<endl;

}
int main(){
    int a ,b ,c;
    cin>>a>>b>>c;
    sum(a,b,c);
}