//Q 4 : Counting for 1 to N
#include<iostream>
using namespace std;

//Function to print form 1 to n 
void printCounting(int num){
    for(int i=0; i<num; i++){
        cout<<i<<" ";
    }

}
int main(){
    int a; 
    cin>>a;
    printCounting(a);

    return 0;
}