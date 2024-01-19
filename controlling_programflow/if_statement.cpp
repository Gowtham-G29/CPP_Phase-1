#include <iostream>

using namespace std;
int main(){

    int num{0};
    const int min{10};
    const int max{100};

    cout<<"Enter the number between "<<min<<" and "<<max<<":"<<endl;
    cin>>num;

    if(num>=min){
        cout<<num<<"is greater than "<<min<<endl;
    }


    return 0;
}