#include <iostream>
using namespace std;

int main(){
 const double price_per_room{30};//const is does able to change 
 const double sales_tax{0.06};
 const int estimate_expiry{30};

 cout<<"Hello, welcome to frank's carpet cleaning service.";
 cout<<"\nHow many rooms would you want to clean?: ";

 int number_of_rooms{0};
 cin>>number_of_rooms;

 cout<<"\nEstimate for carpet cleaning service"<<endl;
 cout<<"Number of rooms: "<<number_of_rooms<<endl;
 cout<<"price per room: $ "<<price_per_room<<endl;
 cout<<"cost: $"<<price_per_room * number_of_rooms<<endl;
 cout<<"Tax: $"<<price_per_room * number_of_rooms *sales_tax<<endl;
 cout<<"========================================="<<endl;
 cout<<"total estimate: $"<<(price_per_room * number_of_rooms)+(price_per_room * number_of_rooms * sales_tax)<<endl;
 cout<<"This estimates is valid for "<<estimate_expiry<<" days"<<endl;



    return 0;
}