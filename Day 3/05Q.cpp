
//Adding form 1 to n
#include<iostream>
 using namespace std;
int main(){
    int n,count=0;
    cout<<"Enter n: "<<"\n";
    cin>>n;

    for(int i=0; i<n; i++){
        count += i;
    }
    cout<<"Addition from 1 to n is : "<<count<<endl;
    return 0;
}