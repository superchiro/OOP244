// Workshop 8 - Virtual Functions and Abstract Base Classes
// File: w8_in_lab.cpp
// Version: 2.0
// Date: 2018/11/02
// Author: Chris Szalwinski, based on work by Heidar Davoudi
// Description:
// This file tests in_lab section of your workshop

//Chihiro Kawaguchi   127694180 SDD
///////////////////////////////////////////////////
#include <iostream>

#include "iAccount.h"
#include "Account.h"

using namespace std;

namespace sict {


    double Account::balance() const {
        return m_balance;
    }

    Account::Account(double initialBalance) {

        if (initialBalance <= 0) {
            m_balance = 0.0;
        } else {
            m_balance = initialBalance;
        }

    }

    bool Account::credit(double aCredit) {
        bool success = false;

        if (aCredit > 0) {
            m_balance += aCredit;
            success = true;
        }

        return success;
    }

    bool Account::debit(double sDebit) {
        bool success = false;

        if (sDebit > 0) {
            m_balance -= sDebit;
            success = true;
        }

        return success;
    }


}