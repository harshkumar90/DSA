#include<iostream>
using namespace std;
 int main(){
    int a;
    cout<<"Enter your age : ";
    cin>>a;
    if(a<18){
        cout<<"You are child now";

    }else if(a<30){
        cout<<"you are adleu";

    }else{
        cout<<"not valid age";
    }
 }