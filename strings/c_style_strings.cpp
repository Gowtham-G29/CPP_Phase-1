#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main(){
    char first_name[20]{};
    char last_name[20]{};
    char full_name[20]{};

    cout<<"Enter your first name :";
    cin>>first_name;
    cout<<endl;
    cout<<"Enter your last name:";
    cin>>last_name;

    cout<<"---------------------"<<endl;

    cout<<"Hello, "<<first_name<<" your first name has "<<strlen(first_name)<<" characters"<<endl;
    cout<<"and your last name "<<last_name<<"has "<<strlen(last_name)<<" characters"<<endl;
    
    strcpy(full_name,first_name);//copy first name to full name
    strcat(full_name," ");
    strcat(full_name,last_name);

    cout<<"Your full name is:"<<full_name<<endl;


    return 0;
}