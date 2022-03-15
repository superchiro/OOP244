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
#include "Hero.h"

using namespace sict;

namespace  sict {

    Hero::Hero() {
        name[0] = '\0'; // *name = '\0';
        health = 0;
        attack = 0;
    }

    Hero::Hero(const char *hName, const int hHealth, const int hAttack) {

        if (hName != nullptr) {
            strncpy(name, hName, MAX_CHAR);
            name[MAX_CHAR] = '\0';
        } else {
            name[0] = '\0';
        }

        health = (hHealth > 0 ? hHealth : 0);

        if (hAttack > 0) {
            attack = hAttack;
        } else {
            attack = 0;
        }

    }

    void Hero::operator-=(int hattack) {

        health -= hattack; // health = health - hattack;

        if (health < 0) {
            health = 0;
        }

    }

    bool Hero::isAlive() const {
        bool alive = false;

        if (health > 0) {
            alive = true;
        }

        return alive; // return (health > 0);

    }

    int Hero::attackStrength() const {
        return attack;
    }

    std::ostream& operator<<(std::ostream &os, const Hero &hero) {

        if (hero.name[0] == '\0') {
            os << "No hero" ;
        } else {
            os << hero.name;
        }

        return os;
    }

    const Hero& operator*(const Hero &first, const Hero &second) {

        int counter = 0;

        Hero heroA = first; // use same datatype. first-> complior makes copy constructor for me!
        Hero heroB = second;

        const Hero *winner = nullptr;

        while (heroA.isAlive() && heroB.isAlive() && counter < MAX_ROUNDS) {
            heroA -= heroB.attackStrength();
            heroB -= heroA.attackStrength();
            counter ++;
        }

        std::cout << "Ancient Battle! " << first << " vs "<< second << " : Winner is ";

        if (heroB.isAlive()) {
            std::cout << second;
            winner = &second;
        } else {
            std::cout << first;
            winner = &first;
        }

        std::cout << " in  " << counter << std::endl;

        return *winner;
    }


}
