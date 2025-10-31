// Q 8 : Sum of all even numbers from 1 to n
#include<iostream>
using namespace std;

void printEvenSum(int num){
    int count=0;
    for(int i=2; i<=num; i=i+2){
        count+=i;
    }
    cout<<"sum of is ;: "<<count;
}
int main(){

    //function call
    int a;
    cin>>a;
    printEvenSum(a);

    return 0;
}