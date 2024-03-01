#include <iostream>

using namespace std;

int main(){
     
     int RoomLength{0};// best practice to declare the variable instead of not declare any values
     int RoomWidth{0};

     cout<<"Enter the lenth of the room:";
     cin>>RoomLength;
     cout<<"Enter the width of the room: ";
     cin>>RoomWidth;

     cout<<"The area of the room is "<<RoomLength * RoomWidth<<" square feet";

    return 0;
}