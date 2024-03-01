#include <iostream>
using namespace std;
extern int x;

int main(){

    cout<<"Hello world"<<endl;
    cout<<x; /* this a linker error because there is a some  missong libraries*/


    return 0;
}