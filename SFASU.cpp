//SFASU.cpp

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

#include "SFASU.h"
#include "SFASU.h"

SFASU::SFASU(){
    cout << name << ID << " In default constructor" << endl;
}//end default constructor

SFASU::~SFASU() {
    cout << name << " " << ID << " calling SFASU destructor" << endl;
}//end default destructor

SFASU::SFASU(string newName, long IDnum){
    name = newName;
    ID = IDnum;
    cout << "In SFASU constructor. " << endl;
}//end paramatized constructor

