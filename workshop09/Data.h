// Workshop 9 - Function Templates
// File: w9_in_lab.cpp
// Version: 2.0
// Date: 2018/11/02
// Author: Chris Szalwinski, based on work by Hasan Murtaza
// Description:
// This file implements the application

//Name Chihiro Kawaguchi  ID 127694180  Section SDD
///////////////////////////////////////////////////


#ifndef PROJECT_DATA_H
#define PROJECT_DATA_H

#include <iostream>
#include <cstring>

namespace sict {
    // These numbers define
    // a) the range of data we expect to see in this workshop
    //    0 to 1 billion
    //    use them in the min and max function
    // b) the output column width for a single data field

    const int LARGEST_NUMBER  = 1000000000; // 1,000,000,000
    const int SMALLEST_NUMBER = 0;
    const int COLUMN_WIDTH    = 15;

    // max returns the largest item in data
    //
    template <typename T>
    T max (const T* data, int n) {
        T copy = data[0]; // T data type

        for (int i = 0; i < n; i++) {
            if (copy < data[i])
                copy = data[i];
        }
        return copy;
    }

    // min returns the smallest item in data
    //
    template <typename T>
    T min (const T* data, int n) {
        T copy = data[0]; // T data type

        for (int i = 0; i < n; i++) {
            if (copy > data[i])
                copy = data[i];
        }
        return copy;
    }

    // sum returns the sum of n items in data
    //
    template <typename T>
    T sum (const T* data, int n) {
        T copy = 0.0;
        for(int i = 0; i < n; i++) {
            copy += data[i];
        }
        return copy;
    }


    // average returns the average of n items in data

    template <typename T>
    double average (const T* data, int n) {
        double avg;
        avg = (sum(data,n))/n;
       return avg;
    }

    // read extracts n items from input and stores them in data
    // - the items are comma separated
    // - this function assumes that a comma exists at the next field to be read
    // - for example: ,data1, data2,data3, ...., datan
    //
    template <typename T>
    bool read(std::istream& input, T* data, int n) {
        bool check = true;
        for (int i = 0; i < n; i++) {
            input.ignore();

            input >> data [i];

            if (input.fail()) {
                check = false;
            }
        }
        return check;
    }

    // display inserts n items of data into std::cout
    //
    template <typename T>
    void display(const char* name, const T* data, int n) {

        std::cout.width(20);
        std::cout << std::right << name;

        for (int i = 0; i < n; i++) {
            std::cout.width(COLUMN_WIDTH);
            std::cout << data[i] ;
        }
        std::cout << std::endl;
    }

    template <typename T>
    bool readRow(std::istream& input, const char* name, T* data, int n) {
        char rowname[2000];
        bool ok = !input.bad();

        // row format is
        // name,1,2,3,4,5,6

        if (ok) {
            // read the name  first

            input.get(rowname, 2000, ',');
            // note: get will read a string upto the , character
            // it will leave the , character in the input buffer

            // check that the caller is reading the correct row (name)
            // - if the user is reading the wrong row, return an error
            if (std::strcmp(rowname, name) != 0) {
                // wrong row
                std::cout << "Cannot parse row for " << name << std::endl;
                input.ignore(2000, '\n');
                ok = false;
            }
        }

        if (ok)
            // read the data array
            ok = read(input, data, n);

        // finish the line
        input.ignore(2000, '\n');
        return ok;
    }


    void answers(const int*, const int*, const int*, const double*, const int*, const int n);
}


#endif //PROJECT_DATA_H
