#include<iostream>
using namespace std;

int main(){
    int a=5;

    (++a); //Increment by one and then use
    cout<<a<<endl;

    //a=6
    
    cout<<(a++);// first use a=6 then increment
    // a=6 but now a = 7
    cout<<a;
    //a = 7
    cout<<(--a);//first decerement 
    // a = 6
    cout<<(a--)<<endl; //first 6 then 5
    //now a = 5
    cout<<a<<endl;
}