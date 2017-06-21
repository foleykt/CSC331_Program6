/* 
 * File:   PartTimeEmployees.cpp
 * Author: Kyle
 * 
 * Created on October 29, 2015, 7:46 PM
 */
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
using namespace std;

#include "PartTimeEmployees.h"

PartTimeEmployees::PartTimeEmployees() {
    cout << "In default constructor for PartTimeEmployees" << endl;
}//end default constructor

PartTimeEmployees::PartTimeEmployees(string newName, long IDnum, string depart, 
        double hSal, double hpw)
{
    SFASU::name = newName;
    SFASU::ID = IDnum;
    Employees::department = depart;
    hrSalary = hSal;
    wkHours = hpw;
    
    cout << "In PartTimeEmployees constructor!" << endl;
    
}//end param constructor

PartTimeEmployees::~PartTimeEmployees() {
    cout << name << " " << ID << " " << department << " " << hrSalary << " " <<
            wkHours << " calling PartTimeEmployees destructor." << endl;
}//end destructor

void PartTimeEmployees::displayME(){
    cout << "Displaying data for: " << name << endl;
    cout << "SFASU ID:            " << ID << endl;
    cout << "Department:          " << department << endl;
    cout << "Hourly Salary:       " << hrSalary << endl;
    cout << "Hours per week:      " << wkHours << endl;
}//end displayME

