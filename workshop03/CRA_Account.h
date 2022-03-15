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

#ifndef PROJECT_ACCOUNT_H
#define PROJECT_ACCOUNT_H

namespace sict {
    const int max_name_length = 40;
    const int min_sin = 100000000;
    const int max_sin = 999999999;

    class CRA_Account {

        char lastname[max_name_length+1];
        char firstname[max_name_length+1];
        int sinNum;

        public:
            void set (const char* familyName, const char* givenName, int sin);
            bool isEmpty ()const;
            void display ()const;
    };
}
#endif