#include <iostream>
using namespace std;

int main(){

    int num1{0};
    int num2{0};

    cout<<boolalpha;  // it results the true or false
   // cout<<noboolalpha;  // it results 0 or 1

    cout<<"Enter the two numbers:";
    cin>>num1>>num2;
    bool equal_result=(num1==num2);
    bool  notequal_result=(num1 != num2);
    cout<<"Comparison result(equals):"<<equal_result<<endl;
    cout<<"Comparison result(notequal):"<<notequal_result<<endl;
    
 
    return 0;
}
// Which is applicable for all datatypes