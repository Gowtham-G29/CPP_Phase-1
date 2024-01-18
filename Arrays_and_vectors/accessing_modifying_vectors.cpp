#include <iostream>
#include <vector>

using namespace std;

int main(){


   // vector<char>vowels; //empty
    // vector<char>vowels(5); //5 initialized to zero

    vector <char>vowels{'a','e','i','o','u'};
    cout<<vowels[0]<<endl;
    cout<<vowels[1]<<endl;
//=========================================================
    vector<int> test_scores{100,98,89};

    cout<<"\nThe test scores in array Syntax:"<<endl;
    cout<<test_scores[0]<<endl;
    cout<<test_scores[1]<<endl;
    cout<<test_scores[2]<<endl;

    cout<<"\nTest scores in vector syntax:"<<endl;
    cout<<test_scores.at(0)<<endl;
    cout<<test_scores.at(1)<<endl;
    cout<<test_scores.at(2)<<endl;

    cout<<"\nThe are "<<test_scores.size()<<" scores in the vector"<<endl;

    //user input vectors
    cout<<"\nEnter 3 test scores:";
    cin>>test_scores.at(0);
    cin>>test_scores.at(1);
    cin>>test_scores.at(2);

    cout<<"\nThe test scores are:";
    cout<<test_scores.at(0)<<endl;
    cout<<test_scores.at(1)<<endl;
    cout<<test_scores.at(2)<<endl;

    //========================================================
    
    //push_back method in vector

    int score_to_add{0};
    cin>>score_to_add;

    test_scores.push_back(score_to_add);
    cout<<"\nEnter one more test score to add to the vector:";
    cin>>score_to_add;
    test_scores.push_back(score_to_add);
    cout<<"\nTest scores are now:"<<endl;

    cout<<test_scores.at(0)<<endl;
    cout<<test_scores.at(1)<<endl;
    cout<<test_scores.at(2)<<endl;
    cout<<test_scores.at(3)<<endl;
    cout<<test_scores.at(4)<<endl;



    cout<<"\nThe size of the vector Now is:"<<test_scores.size()<<endl;
    //cout<<"This should cause an exception!!"<<test_scores.at(10)<<endl;
    //becuse out of range

    return 0;

}
 

