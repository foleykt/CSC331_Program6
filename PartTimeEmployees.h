/* 
 * File:   PartTimeEmployees.h
 * Author: Kyle
 *
 * Created on October 29, 2015, 7:46 PM
 */

#ifndef PARTTIMEEMPLOYEES_H
#define	PARTTIMEEMPLOYEES_H

using namespace std;
#include "Employees.h"

class PartTimeEmployees : public Employees{
public:
    PartTimeEmployees();
    PartTimeEmployees(string newName, long IDnum, string depart, double hSal,
                        double hpw);
    ~PartTimeEmployees();
    void displayME();
    
    double hrSalary;
    double wkHours;
private:

};

#endif	/* PARTTIMEEMPLOYEES_H */

