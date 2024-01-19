#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main(){
    char first_name[20]{};
    char last_name[20]{};
    char full_name[20]{};
     char temp[]{};
    cout<<"Enter your name:";
    cin.getline(full_name,50);

    cout<<"Your full name is:"<<full_name<<endl;

    strcpy(temp,full_name);
    if(strcmp(temp,full_name)==0){
      cout<<temp<<" and "<<full_name<<" are the same "<<endl;
    }else{
        cout<<temp<<" and "<<full_name<<" are different "<<endl;
    }
    
     

    return 0;
} 