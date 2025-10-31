#include<iostream>
using namespace std;

//PrintA function
void printA(){
    cout<<"Inside A"<<endl;
    cout<<"Going back to main"<<endl;

}

int main(){
    cout<<"Inside main"<<endl;
    //function call
    printA();
    cout<<"Back in main"<<endl;

    return 0;
}