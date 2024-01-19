#include <iostream>

using namespace std;

int main(){
    
   char selection{};

   do{
    cout<<"\n-------------"<<endl;
    cout<<"1.Do this "<<endl;
    cout<<"2.Do that "<<endl;
    cout<<"3.Do something else"<<endl;
    cout<<"Q.Quit"<<endl;
    cout<<"\nEnter your selection:";
    cin>>selection;
   }while (selection != 'Q'&&selection!='q');
   {
    /* code */
   }
   


    return 0;
}