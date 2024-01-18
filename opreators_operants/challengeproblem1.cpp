#include <iostream>

using namespace std;

int main (){

   const  int dollar{100};
    const int quarter{25};
    const int dime{10};
    const int nickel{5};
    const int penny{1};
    int cents{0};

    cout<<"Enter the amounts in cents:";
    cin>>cents;
    cout<<"You can provide this change as follows:"<<endl;
    cout<<"dollar: "<<cents/dollar<<endl;
    cout<<"quarters: "<<cents/quarter<<endl;
    cout<<"dimes: "<<cents/dime<<endl;
    cout<<"nickels: "<<cents/nickel<<endl;
    cout<<"pennies: "<<cents/penny<<endl;





    return 0;

}