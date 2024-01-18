#include <iostream>

using namespace std;

int main (){


   char vowels[]{'a','e','i','o','u'};

   cout<<"\nThe first vowel is:"<<vowels[0]<<endl;
   cout<<"\nThe second vowel is:"<<vowels[1]<<endl;

   // cin>>vowels[5];  out of bounds the system would be crashed.---->dont do this

   double hi_temp[]{90.1,89.8,70.2,44.9};

   cout<<"\nThe first hightemparature is:"<<hi_temp[0]<<endl;

   hi_temp[0]=100.5;  // assignment operator modifies the elements
   cout<<"\nThe first hightemparature is:"<<hi_temp[0]<<endl;


   int test_scores[5]{100,90,80,70,60};

   cout<<"\nThe first test score is:"<<test_scores[0]<<endl;
   cout<<"\nThe second test score is:"<<test_scores[1]<<endl;
   cout<<"\nThe third test score is:"<<test_scores[2]<<endl;
   cout<<"\nThe fourth test score is:"<<test_scores[3]<<endl;
   cout<<"\nThe fifth test score is:"<<test_scores[4]<<endl;

   cout<<"\nEnter the 5 test_scores";

   cin>>test_scores[0];
   cin>>test_scores[1];
   cin>>test_scores[2];
   cin>>test_scores[3];
   cin>>test_scores[4];

   cout<<"\nUpdated";
   
   cout<<"\nThe first test score is:"<<test_scores[0]<<endl;
   cout<<"\nThe second test score is:"<<test_scores[1]<<endl;
   cout<<"\nThe third test score is:"<<test_scores[2]<<endl;
   cout<<"\nThe fourth test score is:"<<test_scores[3]<<endl;
   cout<<"\nThe fifth test score is:"<<test_scores[4]<<endl;


   cout<<"\nNotice what the value of the array name is:"<<test_scores<<endl;
   // its the value of the array gives the address location of the array

    return 0;
}