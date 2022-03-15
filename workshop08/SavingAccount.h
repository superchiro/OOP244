// Workshop 8 - Virtual Functions and Abstract Base Classes
// File: w8_in_lab.cpp
// Version: 2.0
// Date: 2018/11/02
// Author: Chris Szalwinski, based on work by Heidar Davoudi
// Description:
// This file tests in_lab section of your workshop

//Chihiro Kawaguchi   127694180 SDD
///////////////////////////////////////////////////


#ifndef PROJECT_SAVINGACCOUNT_H
#define PROJECT_SAVINGACCOUNT_H

#include <iostream>
#include "Account.h"

namespace sict {

    class SavingAccount : public Account {

        double rate;

    public:

        SavingAccount(double, double);
        void monthEnd();
        void display(std::ostream&) const;


    };
}

#endif //PROJECT_SAVINGACCOUNT_H
