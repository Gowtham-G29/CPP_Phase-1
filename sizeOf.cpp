#include <iostream>
#include <climits>
 using namespace std;

 int main(){

    cout<<"Char:"<<sizeof(char)<<" bytes"<<endl;
    cout<<"int:"<<sizeof(int)<<" bytes"<<endl;
    cout<<"unsigned int:"<<sizeof(unsigned int)<<" bytes"<<endl;
    cout<<"short:"<<sizeof(short)<<" bytes"<<endl;
    cout<<"long:"<<sizeof(long)<<" bytes"<<endl;
    cout<<"long long:"<<sizeof(long long)<<" bytes"<<endl;

    //float
    cout<<"float:"<<sizeof(float)<<" bytes"<<endl;
    cout<<"double:"<<sizeof(double)<<" bytes"<<endl;
    cout<<"long double:"<<sizeof(long double)<<" bytes"<<endl;

    //Use values defined in climits

    //allowable minimum range 
    cout<<"Char minimum:"<<CHAR_MIN<<endl;
    cout<<"int minimum:"<<INT_MIN<<endl;
    cout<<"short minimum:"<<SHRT_MIN<<endl;
    cout<<"long minimum:"<<LONG_MIN<<endl;
    cout<<"long long:"<<LLONG_MIN<<endl;
    
    //allowable maximum range
     cout<<"Char maximum:"<<CHAR_MAX<<endl;
    cout<<"int maximum:"<<INT_MAX<<endl;
    cout<<"short maximum:"<<SHRT_MAX<<endl;
    cout<<"long maximum:"<<LONG_MAX<<endl;
    cout<<"long long maximum:"<<LLONG_MAX<<endl;




    return 0;
 }