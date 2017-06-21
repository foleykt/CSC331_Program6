/* 
 * File:   FullTimeEmployees.h
 * Author: Kyle
 *
 * Created on October 29, 2015, 7:27 PM
 */

#ifndef FULLTIMEEMPLOYEES_H
#define	FULLTIMEEMPLOYEES_H

using namespace std;

#include "Employees.h"

class FullTimeEmployees : public Employees{
public:
    FullTimeEmployees();
    FullTimeEmployees(string newName, long IDnum, string depart, double yrSal);
    ~FullTimeEmployees();
    void displayME();
    
    double yrSalary;
private:

};

#endif	/* FULLTIMEEMPLOYEES_H */

