//convert USD to EURO

#include <iostream>
using namespace std;

int main(){

    const double usd_per_euro{1.19};
    double euro{0.0};
    double usd{0.0};

    cout<<"welcome to the usd to euro converter!!";
    cout<<"Enter the Value in usd:";

    cin>>usd;
    double euros=usd*usd_per_euro;
    cout<<usd <<"usd is equivalent to "<<euros<<" Euros"<<endl;


    return 0;

}
