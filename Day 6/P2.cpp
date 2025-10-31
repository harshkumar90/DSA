// Q: Write a function to return the sum of three numbers
# include <iostream>
using namespace std;
//function to return sum of three numbers
int sum(int a,int b,int c){
       int result=a+b+c;
       return result;
}
 int main(){

    int finalsum=sum(6,8,4);
    cout<<"Sum is "<<finalsum<<endl;
    return 0;
 }