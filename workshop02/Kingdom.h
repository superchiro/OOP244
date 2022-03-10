
/***********************************************************
// OOP244 Workshop 2: Dynamic Memory
// File Kingdom.h
// Version 1.0
// Date ???????????
// Author ?????????
// Description
// ?????????????????????
//
//
// Revision History
///////////////////////////////////////////////////////////
// Name Chihiro Kawaguchi
// Date may 21 2019
// Reason SDD
///////////////////////////////////////////////////////////
***********************************************************/


#ifndef PROJECT_KINGDOM_H
#define PROJECT_KINGDOM_H

namespace sict {

    struct Kingdom {
        char m_name[32];
        int m_population;
    };

    void display(struct Kingdom& kingdom); //should be a pointer!
}

#endif