/// Workshop 8 - Virtual Functions and Abstract Base Classes
// File: w8_in_lab.cpp
// Version: 2.0
// Date: 2018/11/02
// Author: Chris Szalwinski, based on work by Heidar Davoudi
// Description:
// This file tests in_lab section of your workshop

//Chihiro Kawaguchi   127694180 SDD
///////////////////////////////////////////////////

#include "SavingAccount.h"

namespace sict {
    const double interest = 0.05;

    iAccount* CreateAccount(const char* type, double initialBalance) {

        iAccount *array = nullptr;

        if (type[0] == 'S') {
            array = new SavingAccount(initialBalance, interest); //0.5 is interest rate
        }

        return array;
    }
}