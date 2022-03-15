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

#ifndef PROJECT_FRACTION_H
#define PROJECT_FRACTION_H

// TODO: create namespace
namespace sict {
// TODO: define the Fraction class
    class Fraction {
        // TODO: declare instance variables
        int numerator;
        int denominator;

        // TODO: declare private member functions
    private:
        int max() const;
        int min() const;
        void reduce();
        int gcd() const;


    public:
        // TODO: declare public member functions
        Fraction();
        Fraction(int num, int deno);
        bool isEmpty() const;
        void display() const;

        // TODO: declare the + operator overload
        Fraction operator+(const Fraction& rhs) const;

    };
}

#endif //PROJECT_FRACTION_H
