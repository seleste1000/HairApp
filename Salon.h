//
//  Salon.h
//  HairApp
//
//  Created by Default on 10/21/15.
//  Copyright (c) 2015 Mariah Cowling. All rights reserved.
//

#ifndef HairApp_Salon_h
#define HairApp_Salon_h


#include <iostream>
#include <string>
using namespace std;

class Salon {
    
private:
    string salonName;
    string salonLocation;
public:
    Salon();
    Salon(string, string);
    ~Salon();
    
    void setSalonName(string);
    void setSalonLocation(string);
    
    string getSalonName();
    string getSalonLocation();
    
    
};


#endif
