/* 
 * File:   Employees.cpp
 * Author: Kyle
 * 
 * Created on October 29, 2015, 7:10 PM
 */

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
using namespace std;

#include "Employees.h"

Employees::Employees() {
    cout << "In default constructor for Employees!" << endl;
}//end default constructor

Employees::Employees(string newName, long IDnum, string depart) {
    SFASU::name = newName;
    SFASU::ID = IDnum;
    Employees::department = depart;
    cout << "In Employees constructor!" << endl;
}//end paramatized constructor

Employees::~Employees() {
    cout << name << " " << ID << " " << department << " calling Employees "
            << "destructor." << endl;
}

