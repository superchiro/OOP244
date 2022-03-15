/**********************************************************
// Workshop 3: Classes and Privacy
// w3_at_home.cpp
// Version 3.0
// 2019/05/19
// Cornel
// Description
// This workshop demonstrates classes in C++ and
// how member variables are defined privately, but
// accessed through public member functions
//
// Revision History
///////////////////////////////////////////////////////////
// Name			Date		          Reason
// Chihiro Kawaguchi      2019/05/28        SDD
///////////////////////////////////////////////////////////
**********************************************************/

#ifndef PROJECT_CRA_ACCOUNT_H
#define PROJECT_CRA_ACCOUNT_H

#include "CRA_Account.h"
#include <iostream>
#include <cstring>
using namespace std;
using namespace sict;

namespace sict {
    void CRA_Account::set(const char *familyName, const char *givenName, int sin) {
        if (sin >= min_sin && sin <= max_sin) {
            if(*CRA_Account::lastname != '\0' && *CRA_Account::lastname != '\0') {

                strncpy(lastname, familyName, max_name_length);
                strncpy(firstname, givenName, max_name_length);

            }


        } else {
            *CRA_Account::firstname = '\0';
            *CRA_Account::lastname = '\0';
            CRA_Account::sinNum = 0;
        }
    }
   
    bool CRA_Account::isEmpty() const {
        if (CRA_Account::sinNum == 0) {
            return true;
        } else {
            return false;
        }
    }

    void CRA_Account::display() const {
        if (isEmpty() == false) {

            cout << "Family Name: " << lastname << endl;
            cout << "Given Name : " << firstname << endl;
            cout << "CRA Account: " << sinNum << endl;
           
        } else {
            cout << "Account object is empty!" << endl;
        }
    }
}

#endif
