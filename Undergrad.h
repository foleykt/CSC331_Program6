/* 
 * File:   Undergrad.h
 * Author: Kyle
 *
 * Created on October 29, 2015, 8:49 PM
 */

#ifndef UNDERGRAD_H
#define	UNDERGRAD_H

using namespace std;
#include "Students.h"

class Undergrad : public Students{
public:
    Undergrad();
    Undergrad(string newName, long IDnum, int hrs, string coll, int tHrs, 
        string maj, string min);
    ~Undergrad();
    void displayME();
    
    string minor;
private:

};

#endif	/* UNDERGRAD_H */

