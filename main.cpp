/* 
 * File:   main.cpp
 * Author: Kyle
 *
 * Created on October 29, 2015, 6:47 PM
 */

#include <cstdlib>

#include "FullTimeEmployees.h"
#include "PartTimeEmployees.h"
#include "Undergrad.h"
#include "Grad.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //initialize a full time employee
    FullTimeEmployees fullEmp("David Cook", 5556665555,
            "Computer Science", 1000000.95);
    
    //initialize a part time employee
    PartTimeEmployees partEmp("Robert Strader", 9998887777,
            "Computer Science", 50000.95, 1);
    
    //initialize an undergrad student
    Undergrad underStud("Kyle Foley", 20121627, 12, "Science & Math",
            70, "Computer Information Systems", "General Business");
    
    //initialize a grad student
    Grad gradStud("Future Kyle", 20121627, 12, "Science & Math",
            5000, "Computer Information System", false);
    
    //display data for employees and students
    fullEmp.displayME();
    partEmp.displayME();
    underStud.displayME();
    gradStud.displayME();
    
    return 0;
}

