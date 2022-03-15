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

#ifndef PROJECT_HERO_H
#define PROJECT_HERO_H

namespace sict {
    const int MAX_ROUNDS = 100;
    const int MAX_CHAR = 40;

    class Hero {
        char name[MAX_CHAR + 1];
        int health;
        int attack;

    public:

        Hero();
        Hero(const char *hName, const int hHealth, const int hAttack);
        void operator-=(int hattack);
        bool isAlive() const;
        int attackStrength() const;

        friend std::ostream& operator<<(std::ostream& os, const Hero& hero);
    };

    const Hero& operator*(const Hero& first, const Hero& second);

}

#endif //PROJECT_HERO_H

//name && name[0] ! = '\0'