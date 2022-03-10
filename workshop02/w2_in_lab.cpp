/***********************************************************
// Workshop 2: Dynamic Memory
// File w2_in_lab.cpp
// Version 2.0
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

#include <iostream>
#include "Kingdom.h"
#include "Kingdom.h" // intentional

using namespace std;
using namespace sict;

void read(sict::Kingdom&);

int main() {
    int count = 0; // the number of kingdoms in the array

    // TODO: declare the pKingdom pointer here (don't forget to initialize it)

    // you dont need the sict:: because you use the "using namespace sict", but it solve a warning... you can leave it
    sict::Kingdom* pKingdom = nullptr; // this is a pointer, good job! :)

    cout << "==========" << endl
         << "Input data" << endl
         << "==========" << endl
         << "Enter the number of Kingdoms: ";
    cin >> count;
    cin.ignore();

    if (count < 1) return 1;

    // TODO: allocate dynamic memory here for the pKingdom pointer
    pKingdom = new sict::Kingdom[count]; // correct

    for (int i = 0; i < count; ++i) {
        cout << "Kingdom #" << i + 1 << ": " << endl;

        // TODO: add code to accept user input for Kingdom i

        read(pKingdom[i]); // correct
    }
    cout << "==========" << endl << endl;

    // testing that "display(...)" works
    cout << "------------------------------" << endl
         << "The 2nd kingdom entered is" << endl
         << "------------------------------" << endl;
    sict::display(pKingdom[1]);
    cout << "------------------------------" << endl << endl;

    // TODO: deallocate the dynamic memory here
    delete [] pKingdom; // correct
    pKingdom = nullptr; // correct

    return 0;
}

// read accepts data for a Kingdom from standard input
//
void read(sict::Kingdom& kingdom) {

    cout << "Enter the name of the Kingdom: ";
    cin.get(kingdom.m_name, 32, '\n');
    cin.ignore(2000, '\n');
    cout << "Enter the number of people living in " << kingdom.m_name << ": ";
    cin >> kingdom.m_population;
    cin.ignore(2000, '\n');
}