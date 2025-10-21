//Print max fo theree numbers
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter a: b : c :  ";
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<"A is gratest";
    }
    else if(b>a&&b>c){
        cout<<"b is gratest";
    }
    else{
        cout<<"maximum number is c";
    }
}