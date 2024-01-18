#include <iostream>
#include <vector>

using namespace std;

//2D vector
int main(){

vector<vector<int>>movie_ratings{


         {1,2,3,4},
         {1,2,4,4},
         {1,3,4,5}
};

cout<<"\nThe Movie rating for reviewer #1 using array syntax:"<<endl;
cout<<movie_ratings[0][0]<<endl;
cout<<movie_ratings[0][1]<<endl;
cout<<movie_ratings[0][2]<<endl;
cout<<movie_ratings[0][3]<<endl;

cout<<"\n The movie rating for review #2 using vector syntax:"<<endl;
cout<<movie_ratings.at(1).at(0)<<endl;
cout<<movie_ratings.at(1).at(1)<<endl;
cout<<movie_ratings.at(1).at(2)<<endl;
cout<<movie_ratings.at(1).at(3)<<endl;





return 0;

}

