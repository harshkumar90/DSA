//check valid triangle or not 
#include<iostream>
using namespace std;

int main(){
    int a,b,c;

    cout<<"Enter side a  : ";
    cin>>a;
    cout<<"Enter side b  : ";
    cin>>b;
    cout<<"Enter side c  : ";
    cin>>c;
    
    if (a+b>c && b+c>a){
        cout<<"valid triangle"<<endl;

    }else{
        cout<<"Invalid triangle'\n'";
    }
}