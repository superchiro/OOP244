/////////////////////////////////////////////
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


#include <iostream>
#include "Fraction.h"

using namespace sict;
using namespace std;

namespace sict {

// TODO: implement the default constructor
Fraction::Fraction(){
    numerator = 0;
    denominator = 0;
}

// TODO: implement the two-argument constructor
Fraction::Fraction(int num, int deno){
    if (num >= 0 && deno > 0){
        numerator = num;
        denominator = deno;
        reduce();
    } else {
        *this = Fraction();
    }
}

// TODO: implement the max query
int Fraction::max() const {
  int greaterNum;
    if(numerator > denominator) {
        greaterNum = numerator;
    } else {
        greaterNum = denominator;
    }
    return greaterNum;
}

// TODO: implement the min query
int Fraction::min() const {
    int lessNum;
    if(numerator < denominator) {
        lessNum = numerator;
    } else {
        lessNum = denominator;
    }
    return lessNum;
}

// gcd returns the greatest common divisor of num and denom
//
    int Fraction::gcd() const {
        int mn = min();  // min of numerator and denominator
        int mx = max();  // max of numerator and denominator
        int g_c_d = 1;
        bool found = false;

        for (int x = mn; !found && x > 0; --x) { // from mn decrement until divisor found
            if (mx % x == 0 && mn % x == 0) {
                found = true;
                g_c_d = x;
            }
        }
        return g_c_d;
    }

// TODO: implement the reduce modifier
void Fraction::reduce() {
int val = gcd();
    numerator /= val;
    denominator /= val;
}

// TODO: implement the display query
void Fraction::display() const {
            if (isEmpty()) {
                cout << "no fraction stored";
            } else {
                if (denominator == 1) {
                    cout << numerator;
                } else {
                    cout << numerator << "/" << denominator;
                }
            }
    }

// TODO: implement the isEmpty query
bool Fraction::isEmpty() const {
    if(numerator == 0 && denominator == 0) {
        return true;
    } else {
        return false;
    }
}
// TODO: implement the + operator//
Fraction Fraction::operator+(const Fraction& rhs) const {
    Fraction copy;
    if(!this->isEmpty() && !rhs.isEmpty()) {
        copy.numerator = ((numerator * rhs.denominator) + (rhs.numerator * denominator));
        copy.denominator = (denominator * rhs.denominator);
        copy.reduce();
    }

        return copy;
 }
}