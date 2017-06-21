/* 
 * File:   Grad.cpp
 * Author: Kyle
 * 
 * Created on October 29, 2015, 9:05 PM
 */

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
using namespace std;

#include "Grad.h"

Grad::Grad() {
    cout << "In default constructor for Grad" << endl;
}//end default constructor

Grad::Grad(string newName, long IDnum, int hrs, string coll, int tHrs, 
        string maj, bool thes) 
{
    SFASU::name = newName;
    SFASU::ID = IDnum;
    Students::hours = hrs;
    Students::college = coll;
    Students::totalHours = tHrs;
    major = maj;
    thesis = thes;
    
    cout << "In Grad constructor!" << endl;
}//end param constructor

Grad::~Grad() {
    cout << name << " " << ID << " " << hours << " " << college << " " << 
            totalHours << " " << major << " " << thesis << 
            " calling Grad destructor" << endl;
}//end destructor

void Grad::displayME(){
    cout << "Displaying data for: " << name << endl;
    cout << "SFASU ID:            " << ID << endl;
    cout << "Hours:               " << hours << endl;
    cout << "College:             " << college << endl;
    cout << "Total Hours:         " << totalHours << endl;
    cout << "Major:               " << major << endl;
    cout << "Has Thesis:          " << thesis << endl;
}//end displayME
