// Chihiro Kawaguchi
// 127694180
// SDD
// 6/04/2019

#ifndef PROJECT_PASSENGER_H
#define PROJECT_PASSENGER_H

namespace sict {

    class Passenger {

        char name [18];
        char destination [18];

        public:
            Passenger();
            Passenger(const char *pName, const char *dest);
            bool isEmpty() const;
            void display() const;
    };
}

#endif
