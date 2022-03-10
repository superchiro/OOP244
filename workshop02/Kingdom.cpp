/***********************************************************
// OOP244 Workshop 2: Dynamic Memory
// File Kingdom.cpp
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


#ifndef NAMESPACE_HEADERFILE_H
#define NAMESPACE_HEADERFILE_H

#include <iostream>
#include "Kingdom.h"

using namespace std;
using namespace sict;

namespace sict {

    void display(struct Kingdom& kingdom){

        cout << kingdom.m_name << ", population " << kingdom.m_population << endl;

    }// where is the implementation?
}

#endif