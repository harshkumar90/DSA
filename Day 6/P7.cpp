//P 7 : Sum of alll numbers form 1 to n
#include<iostream>
using namespace std;

void printSum(int num){
    int count=0;
    for(int i=1; i<=num; i++){
        count = count + i;
    }
    cout<<"Total sum form 1 to n is : "<<count<<endl;

}
int main(){
    int num ;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    printSum(num);
 return 0;
}