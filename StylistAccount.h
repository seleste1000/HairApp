
#ifndef StylistAccount_h
#define StylistAccount_h

#include <iostream>
#include <string>
#include "Salon.h"

using namespace std;
//#include <vector>
//#include "Salon.h" //derived from salon class


class StylistAccount : public Salon { //declaring StylistAccount class, derived from Chair/Salon class
    //class StylistAccount { //declaring StylistAccount class
private: //private member variables
    string stylistFirstName; //holds stylist's first name
    string stylistLastName; //holds stylist's last name
    string stylistLocation; //holds the stylist's location (of their chair or salon) //edit based on chair/salon class
    string stylistSpecialization; //holds the stylist's specialization
    /*
     vector string stylistSpecialization; //holds the stylist's specialization(s)
     */
    
public: //public member functions, constructors, and destructors
    StylistAccount(){ //sets arbitrary value for each member variable
        stylistFirstName = "";
        stylistLastName = "";
        stylistLocation = ""; //edit based on chair/salon class
        stylistSpecialization = "";
    } //end default constructor
    
    StylistAccount(string fn, string ln, string lo, string sp){ //user sets values for each member variable
        stylistFirstName = fn;
        stylistLastName = ln;
        stylistLocation = lo; //edit based on chair/salon class
        stylistSpecialization = sp;
    } //end overloaded constructor
    
    ~StylistAccount(){/* cout << "stylist account deleted" << endl; */}; //end destructor
    
    //accessor and mutator functions
    
    string getStylistFirstName(){ return stylistFirstName; } //returns the stylist's first name
    void setStylistFirstName( string fn ){ stylistFirstName = fn; } //parameter sets the stylist's first name
    
    string getStylistLastName(){ return stylistLastName; } //returns the stylist's last name
    void setStylistLastName( string ln ){ stylistLastName = ln; } //returns stylist's last name
    
    string getStylistLocation(){ return stylistLocation; } //returns the stylist's location //edit based on chair/salon class
    void setStylistLocation( string lo ){ stylistLocation = lo; } //parameter sets the stylist's location //edit based on chair/salon class
    
    string getStylistSpecilization(){ return stylistSpecialization; } //returns the stylist's specialization(s)
    void setStylistSpecializatoin( string sp ){ stylistSpecialization = sp; } //returns stylist's specialization(s)
    
    //vector accessor and mutator function declarations in .cpp file
    
};


#endif
