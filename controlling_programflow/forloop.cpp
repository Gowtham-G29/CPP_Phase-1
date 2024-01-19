#include <iostream>
using namespace std;

int main(){

    // for(int i{0};i<=1000000;i++){
    //      cout<<i<<endl;
    // }

    // for(int i{1},j{5};i<=100000000000;i++,j++){
    //     cout<<i<<"+"<<j<<"="<<(i+j)<<endl;
    // }
     for(int i{0};i<=1000;i++){
        cout<<i;
        cout<<((i%10==0)?"\n":" ");
     }

    return 0;
}