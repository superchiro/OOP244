// Workshop 9 - Function Templates
// File: w9_in_lab.cpp
// Version: 2.0
// Date: 2018/11/02
// Author: Chris Szalwinski, based on work by Hasan Murtaza
// Description:
// This file implements the application

//Name Chihiro Kawaguchi  ID 127694180  Section SDD
///////////////////////////////////////////////////


#include <iostream>
#include "Data.h"
using namespace std;

namespace sict {
    // readRow extracts a single record from input and stores n data fields in data
    // - includes error checking: checks if the name of the row is valid.
    //

    // answers outputs statistics for visual validation of data
    //
    void answers(const int* year, const int* population, const int* violentCrime,
                 const double* violentCrimeRate, const int* grandTheftAuto, const int n) {

        // Q1: print the population change in millions of people
        // - print answer correct to 2 decimal places.
        // e..g "6.31 million";
        // note that population is an integer, so dividing by 1000000 would yield "6"
        
        int populationGrowth = (population[n - 1] - population [0]);
        //double a = populationGrowth * 0.000001;
        //double a = ((double) populationGrowth) / 1000000;
        double a = static_cast<double>(populationGrowth) / 1000000;

        cout.setf(ios::fixed);
        cout.precision(2);

        cout << "Population change form "<< year[0] << " to " << year [n-1] << " is " << a << " million" << endl;
        

        // Q2. print whether violent crime rate has gone up or down between 2000 and 2005

        cout << "Violent Crime trend is ";
        if (violentCrimeRate[0] > violentCrimeRate[n - 1]) {
            cout << "down" << endl;
        } else {
            cout << "up" << endl;
        }

        // Q3 print the GTA number accurate to 0 decimal places
        
       // grandTheftAuto = (grandTheftAuto * 0.1);

        //cout.precision(2);

        double gta;
        gta = average(grandTheftAuto,n) * 0.000001;

        cout << "There are " << gta << " million Grand Theft Auto incidents on average a year" << endl;


        // Q4. Print the min and max violentCrime rates

        cout.precision(0);

        cout << "The Minimum Violent Crime rate was " << min(violentCrimeRate, n) << endl;
        cout << "The Minimum Violent Crime rate was " << max(violentCrimeRate, n) << endl;



    }
}