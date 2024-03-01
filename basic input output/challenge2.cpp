#include <iostream>
using namespace std;

int main (){
     
     cout<<"Hello, This is Franks Carpet Cleaning Service!";

     const double largeRoom_price{35};
     const double smallRoom_price{25};
     const double salesTax{0.06};
     const int ExpiryDate{30};
     int largeRooms,smallRooms;

     cout<<"How many large rooms you want?:"<<endl;
     cin>> largeRooms;
     cout<<"How many small rooms you want?:"<<endl;
     cin>> smallRooms;

     cout<<"Number of small rooms: "<<smallRooms<<endl;
     cout<<"Number of small rooms: "<<largeRooms<<endl;
     cout<<"Price per large Room:$ "<<largeRoom_price<<endl;
     cout<<"Price per small room: $" <<smallRoom_price<<endl;
     cout<<"Cost:$ "<<(largeRoom_price * largeRooms)+(smallRoom_price * smallRooms)<<endl;
     cout<<"Tax:$ "<<(largeRoom_price * largeRooms * salesTax)+(smallRoom_price*smallRooms*salesTax)<<endl;
     cout<<"Total estimated :$ "<<((largeRoom_price * largeRooms)+(smallRoom_price * smallRooms))+((largeRoom_price * largeRooms * salesTax)+(smallRoom_price*smallRooms*salesTax))<<endl;
     cout<<"This estimated is valid upto"<<ExpiryDate<<" days."<<endl;


    return 0;
}