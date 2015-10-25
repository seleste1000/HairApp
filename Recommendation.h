
#include <iostream>
#include <string>

using namespace std;

class Recommendation {
  //member variables
  private:
  string rec1; //holds the first recommendation
  string rec2; //holds the 2nd recommendation
  string rec3; //holds 3rd recommendation
  string rec4; //holds 4th recommendation
  string rec5; //holds 5th recommendation
  
  public:
  //constructors and destructor
  Recommendation(){
    //declare member variables (set arbitrary values)
    rec1 = "";
    rec2 = "";
    rec3 = "";
    rec4 = "";
    rec5 = "";
  }
  ~Recommendation(){
    /*cout << "The object has been deleted" << endl;*/
  }
  
  //member functions
  string getRec1(){ return rec1; } //returns the first recommendation
  void setRec1( string r1 ){ rec1 = r1; } //sets the first recommendation
  string getRec2(){ return rec2; } //returns the 2nd recommendation
  void setRec2( string r2 ){ rec2 = r2; } //sets the 2nd recommendation
  string getRec3(){ return rec3; } //returns the 3rd recommendation
  void setRec3( string r3 ){ rec3 = r3; } //sets the 3rd recommendation
  string getRec4(){ return rec4; } //returns the 4th recommendation
  void setRec4( string r4 ){ rec4 = r4; } //sets the 4th recommendation
  string getRec5(){ return rec5; } //returns the 5th recommendation
  void setRec5( string r5 ){ rec5 = r5; } //sets the 5th recommendation
  
  //quiz to ask users about their hair to find recommendations
  void recsQuiz(); //implemented in .cpp
  
}
