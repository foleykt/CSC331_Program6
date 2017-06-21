/* 
 * File:   Students.cpp
 * Author: Kyle
 * 
 * Created on October 29, 2015, 8:24 PM
 */
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
using namespace std;

#include "Students.h"

Students::Students() {
    cout << "In default constructor for Students" << endl;
}//end default constructor

Students::Students(string newName, long IDnum, int hrs, string coll, int tHrs, 
        string maj) 
{
    SFASU::name = newName;
    SFASU::ID = IDnum;
    hours = hrs;
    college = coll;
    totalHours = tHrs;
    
    cout << "In Students constructor!" << endl;
}//end param constructor

Students::~Students() {
    cout << name << " " << ID << " " << hours << " " << college << " " <<
            totalHours << " calling Students destructor" << endl;
    
}//end destructor

