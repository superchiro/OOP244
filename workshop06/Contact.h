////////////////////////////////////////////
// Workshop 5: operator overloading
// File: w5_in_lab.cpp
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

#ifndef PROJECT_CONTACT_H
#define PROJECT_CONTACT_H

namespace sict {
    const int MAX_CHAR = 20;

    class Contact {
        char name[MAX_CHAR + 1];
        long long *phoneNum;
        int counter;

        int coutryCode(long long pNum) const;
        int areaCode(long long pNum) const;
        int phone(long long pNum) const;
        bool isPhoneValid(long long pNum) const;
    public:
        Contact();
        Contact(const char *pName, const long long *Num, int count);
        ~Contact();
        bool isEmpty() const;
        void display() const;
        //int countryCode(long long Num);
    };
}
#endif //PROJECT_CONTACT_H
