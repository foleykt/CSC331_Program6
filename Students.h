/* 
 * File:   Students.h
 * Author: Kyle
 *
 * Created on October 29, 2015, 8:24 PM
 */

#ifndef STUDENTS_H
#define	STUDENTS_H

using namespace std;
#include "SFASU.h"

class Students : public SFASU{
public:
    Students();
    Students(string newName, long IDnum, int hrs, string coll, int tHrs, string maj);
    ~Students();
    
    int hours;
    string college;
    int totalHours;
    string major;
private:

};

#endif	/* STUDENTS_H */

