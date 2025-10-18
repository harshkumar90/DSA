//Pattern 1 : Square pattern

#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int row=0; row<n; row++){

        for(int col=0; col<n; col++){
            cout<<"* ";
        } cout<<"\n";
    }
    return 0;
}

/*
OUTPUT
* * * * 
* * * * 
* * * * 
* * * * 
*/

