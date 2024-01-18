#include <iostream>
using namespace std;

int main(){
     
      int total{};
      int num1{},num2{},num3{};
      const int count{3};

      cout<<"Enter the 3 integers searated ny spaces:";
      cin>>num1>>num2>>num3;
      total=num1+num2+num3;
      double average{0.0};

      average=static_cast<double>(total)/count;//convert the type of the variable
      
      cout<<"The 3 numbers were:" <<num1<<" ,"<<num2<<","<<num3<<endl;
      cout<<"the sum of the numbers is "<<total<<endl;
      cout<<"The average of the numbers is "<<average<<endl;



 
    return 0;
}