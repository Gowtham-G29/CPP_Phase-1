#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int>vector1;
    vector<int>vector2;

    int add1{0};
    cout<<"Add first element into the vector1:";
    cin>>add1;
    vector1.push_back(add1);
    cout<<"\nAdd second element into the vector1:";
    cin>>add1;
    vector1.push_back(add1);
    cout<<"1st Elements in vector1:"<<vector1.at(0)<<endl;
    cout<<"2nd Elements in vector1:"<<vector1.at(1)<<endl;
    cout<<"\nThe size of the vector 1:"<<vector1.size()<<endl;
    
    
    int add2{0};
    cout<<"Add first element into the vector2:";
    cin>>add2;
    vector2.push_back(add2);
    cout<<"Add second element into the vector2:";
    cin>>add2;
    vector2.push_back(add2);
    cout<<"1st Elements in vector2:"<<vector2.at(0)<<endl;
    cout<<"2nd Elements in vector2:"<<vector2.at(1)<<endl;
    cout<<"\nThe size of the vector 2:"<<vector2.size()<<endl;


    vector<vector<int>>vector_2d;

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout<<"\nThe elements in the 2d vector is:"<<endl;
    cout<<vector_2d.at(0).at(0)<<" "<<vector_2d.at(0).at(1)<<endl;
    cout<<vector_2d.at(1).at(0)<<" "<<vector_2d.at(1).at(1)<<endl;

    vector1.at(0)=1000;

    cout<<"\nThe updated the 2d vector is:"<<endl;
    cout<<vector_2d.at(0).at(0)<<" "<<vector_2d.at(0).at(1)<<endl;
    cout<<vector_2d.at(1).at(0)<<" "<<vector_2d.at(1).at(1)<<endl;

    cout<<"\nThe updated elements in vector1:"<<endl;
    cout<<vector1.at(0)<<endl;
    cout<<vector1.at(1)<<endl;

    return 0;
}