// Workshop 8 - Virtual Functions and Abstract Base Classes
// File: w8_in_lab.cpp
// Version: 2.0
// Date: 2018/11/02
// Author: Chris Szalwinski, based on work by Heidar Davoudi
// Description:
// This file tests in_lab section of your workshop

//Chihiro Kawaguchi   127694180 SDD
///////////////////////////////////////////////////


#ifndef PROJECT_ACCOUNT_H
#define PROJECT_ACCOUNT_H

#include "iAccount.h"

namespace sict {

    class Account : public iAccount {

        double m_balance;

    protected:

        double balance() const;

    public:

        Account(double);
        bool credit(double);
        bool debit(double);

    };

    iAccount* CreateAccount(const char *, double);
}


#endif //PROJECT_ACCOUNT_H
