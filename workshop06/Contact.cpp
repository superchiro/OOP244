////////////////////////////////////////////
// Workshop 6: operator overloading
// File: w6_in_lab.cpp
// Version: 2.1
// Date: 2019/05/26
// Author: Cornel
// Description:
// This file tests in-lab section of your workshop

//Chihiro Kawaaguchi
//127694180
//SDD
//06//11/2019
/////////////////////////////////////////////

#include <iostream>
#include <cstring>
#include "Contact.h"

using namespace sict;
using namespace std;


namespace sict{

    Contact::Contact() {
        *name = '\0';
        phoneNum = nullptr;
        counter = 0;
    }

    Contact::Contact(const char *pName, const long long *Num, int count) {

        if (pName != nullptr) {
            strncpy(name, pName, MAX_CHAR);
            name[MAX_CHAR] = '\0';
        } else {
            *name = '\0';
        }

        if (Num != nullptr) {

            counter = 0;

            for(int i = 0; i < count; i++) {
                if (isPhoneValid(Num[i])) {
                    counter++;
                }
            }

            if (counter > 0) {
                phoneNum = new long long[counter];
                int index = 0;

                for(int i = 0; i < count; i++) {
                    if (isPhoneValid(Num[i])) {
                        phoneNum[index] = Num[i];
                        index++;
                    }
                }
            }

        } else {
            phoneNum = nullptr;
            counter = 0;
        }


    }

    Contact::~Contact() {
        delete [] phoneNum;
    }

    bool Contact::isEmpty() const {
        return *name == '\0';
    }

    void Contact::display() const {
        if (isEmpty()){
            cout << "Empty contact!" << endl;
        } else {
            cout << name << endl;
            for(int i = 0; i < counter; i++) {
                cout << "(+" << coutryCode(phoneNum[i]) << ") ";
                cout << areaCode(phoneNum[i]) << " ";
                cout << phone(phoneNum[i])/10000 << "-" ;

                cout.width(4);
                cout.fill('0');
                cout << phone(phoneNum[i])%10000 << endl;
            }
        }
    }

    int Contact::coutryCode(long long pNum) const {
        return (pNum / 10000000000LL);
    }

    int Contact::areaCode(long long pNum) const {
        return (pNum / 10000000LL) % 1000LL;
    }

    int Contact::phone(long long pNum) const {
        return pNum % 10000000LL;
    }

    bool Contact::isPhoneValid(long long pNum) const {
        return coutryCode(pNum) > 0 && coutryCode(pNum) < 100 &&
               areaCode(pNum) >= 100 &&
               phone(pNum) >= 1000000;
    }

}
