/* 
 * File:   FullTimeEmployees.cpp
 * Author: Kyle
 * 
 * Created on October 29, 2015, 7:27 PM
 */

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
using namespace std;

#include "FullTimeEmployees.h"

FullTimeEmployees::FullTimeEmployees() {
    cout << "In default constructor for FullTimeEmployees!" << endl;
}//end default constructor

FullTimeEmployees::FullTimeEmployees(string newName, long IDnum, string depart, 
        double yrSal)
{
    SFASU::name = newName;
    SFASU::ID = IDnum;
    Employees::department = depart;
    yrSalary = yrSal;
    cout << "In FullTimeEmployees constructor!" << endl;
}//end param constructor

FullTimeEmployees::~FullTimeEmployees() {
    cout << name << " " << ID << " " << department << " " << yrSalary <<
            " calling FullTimeEmployees destructor." << endl;
}//end destructor

void FullTimeEmployees::displayME(){
    cout << "Displaying data for " << name << ":" << endl;
    cout << "SFASU ID number: " << ID << endl;
    cout << "Department:      " << department << endl;
    cout << "Yearly Salary:   " << yrSalary << endl;
}//end displayME

