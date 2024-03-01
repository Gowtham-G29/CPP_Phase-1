#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main (){
     
     string s0{};
     string s1{"Apple"};
     string s2{"Banana"};
     string s3 {"kiwi"};
     string s4{"Apple"};
     string s5{s1};
     string s6{s1,0,3};
     string s7(10,'X');

     //initialization
     cout<<"\ninitialization"<<endl;
     cout<<endl;
     cout<<"s1 is initialized to "<<s1<<endl;    
     cout<<"s2 is initialized to "<<s2<<endl;
     cout<<"s3 is initialized to "<<s3<<endl;
     cout<<"s4 is initialized to "<<s4<<endl;
     cout<<"s5 is initialized to "<<s5<<endl;
     cout<<"s6 is initialized to "<<s6<<endl;
     cout<<"s7 is initialized to "<<s7<<endl;

     //comparison
     







    return 0; 
}