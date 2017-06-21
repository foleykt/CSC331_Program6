/* 
 * File:   Undergrad.cpp
 * Author: Kyle
 * 
 * Created on October 29, 2015, 8:49 PM
 */

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
using namespace std;


#include "Undergrad.h"

Undergrad::Undergrad() {
    cout << "In default constructor for Undergrad" << endl;
}//end default constructor

Undergrad::Undergrad(string newName, long IDnum, int hrs, string coll, int tHrs, 
        string maj, string min) 
{
    SFASU::name = newName;
    SFASU::ID = IDnum;
    Students::hours = hrs;
    Students::college = coll;
    Students::totalHours = tHrs;
    major = maj;
    minor = min;
    
    cout << "In Undergrad constructor!" << endl;
}//end param constructor

Undergrad::~Undergrad() {
    cout << name << " " << ID << " " << hours << " " << college << " " << 
            totalHours << " " << major << " " << minor << 
            " calling Undergrad destructor" << endl;
}//end destructor

void Undergrad::displayME(){
    cout << "Displaying data for: " << name << endl;
    cout << "SFASU ID:            " << ID << endl;
    cout << "Hours:               " << hours << endl;
    cout << "College:             " << college << endl;
    cout << "Total Hours:         " << totalHours << endl;
    cout << "Major:               " << major << endl;
    cout << "Minor:               " << minor << endl;
    
}//end displayME

