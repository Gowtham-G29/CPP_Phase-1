#include <iostream>
using namespace std;

int age{20};//global variable
             //it can access anywhere of of your program

int main (){
     
     int age{18};// local variable
                 // it can access only within the function

     cout<<age<<endl;

    return 0;
}//use local variable is best