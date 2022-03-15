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
#include "SavingAccount.h"

using namespace std;

namespace sict {

    SavingAccount::SavingAccount(double initial, double interest) : Account (initial){
        if (initial > 0) {
            rate = interest;
        } else {
            rate = 0.0;
        }
    }

    void SavingAccount::monthEnd() {
        double culcutate = 0;
        culcutate = (balance() * rate);
        credit(culcutate);
    }

    void SavingAccount::display(std::ostream& os) const {
        os << "Account type: savings" << endl;
        cout.setf(ios::fixed);
        cout.precision(2);

        os << "Balance: $" << balance() << endl;
        os << "Interest Rate (%):" << rate * 100 << endl;
    }


}