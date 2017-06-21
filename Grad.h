/* 
 * File:   Grad.h
 * Author: Kyle
 *
 * Created on October 29, 2015, 9:05 PM
 */

#ifndef GRAD_H
#define	GRAD_H

using namespace std;
#include "Students.h"

class Grad : public Students{
public:
    Grad();
    Grad(string newName, long IDnum, int hrs, string coll, int tHrs, 
        string maj, bool thes);
    ~Grad();
    void displayME();
    
    bool thesis;
private:

};

#endif	/* GRAD_H */

