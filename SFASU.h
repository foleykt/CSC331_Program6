/* 
 * File:   SFASU.h
 * Author: Kyle
 *
 * Created on October 29, 2015, 6:49 PM
 */

#ifndef SFASU_H
#define	SFASU_H

using namespace std;
#include <string>

class SFASU{
public:
    
    SFASU(string newName, long IDnum);
    SFASU();
    ~SFASU();
    
    string name;
    long ID;
    
};

#endif	/* SFASU_H */

