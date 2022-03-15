//Chihiro Kawaguchi
//127694180
//SDD
//06/04/2019

#include <iostream>
#include <cstring>
#include "Passenger.h"
using namespace std;
using namespace sict;

// TODO: continue your namespace here
namespace sict {

// TODO: implement the default constructor here
    Passenger::Passenger () {
        *name = '\0';
        *destination = '\0';
    }

// TODO: implement the constructor with 2 parameters here
    Passenger::Passenger(const char *pName, const char *dest) {

        if (pName != nullptr && *pName != '\0' && dest != nullptr && *dest != '\0') {
            strncpy(name, pName, 17);
            strncpy(destination, dest, 17);

            name[17] = '\0';
            destination[17] = '\0';
        } else {
            //*name = '\0';
            //*destination = '\0';
            *this = Passenger();
        }

    }

// TODO: implement isEmpty query here
    bool Passenger::isEmpty () const {
        if(*name == '\0' || *destination == '\0') {
            return true;
        } else {
            return false;
        }
    }

// TODO: implement display query here
    void Passenger::display () const {

        if (Passenger::isEmpty() == false) {
            cout << Passenger::name << " - " << Passenger::destination << endl;
        } else {
            cout << "No passenger!" << endl;
        }

    }

}


