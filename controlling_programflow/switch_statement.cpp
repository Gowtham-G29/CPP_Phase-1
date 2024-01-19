#include <iostream>
using namespace std;

int main(){

    char letter_grade{0};

    cout<<"Enter the grade you expect on exam:";
    cin>>letter_grade;

    switch(letter_grade){

        case 'a':
        case 'A':cout<<"You need to score 90 or above,study hard!"<<endl;
        break;
        case 'b':
        case 'B':cout<<"You need 80-90 for a B,go study!"<<endl;
        break;
        case 'c':
        case 'C':cout<<"you need 70-80 for an average grade"<<endl;
        break;
        case 'd':
        case 'D':cout<<"Hmm you should strive for a better grade,All you need is 60-69"<<endl;
        break;
        case 'f':
        case 'F':{

            char confirm{};
            cout<<"Are you  sure (Y/N)?";
            cin>>confirm;
            if(confirm=='y'||confirm=='Y'){
                cout<<"OK,i guess you didnt study..."<<endl;
            }else if(confirm=='n'||confirm=='N'){
                cout<<"Good go study!"<<endl;
            }else{
                cout<<"lillegal choice."<<endl;   
            }
        }
        break;
        default :cout<< "you are out of range"<<endl;
    }




    return 0;
}