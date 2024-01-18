#include <iostream>

using namespace std;

int main(){

       int num1{10};// initialization
       int num2{20};
       
       num1=100; // assignment
       num2=num1;  // assignment can change the initialization values
       

       cout<<"Num1 is :"<<num1<<endl;
       cout<<"Num2 is :"<<num2<<endl;


    return 0;
}