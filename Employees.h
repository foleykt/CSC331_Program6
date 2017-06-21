/* 
 * File:   Employees.h
 * Author: Kyle
 *
 * Created on October 29, 2015, 7:10 PM
 */

#ifndef EMPLOYEES_H
#define	EMPLOYEES_H

using namespace std;
#include <string>
#include "SFASU.h"

class Employees : public SFASU {
public:
    Employees();
    Employees(string newName, long IDnum, string depart);
    ~Employees();
    
    string department;
private:

};

#endif	/* EMPLOYEES_H */

