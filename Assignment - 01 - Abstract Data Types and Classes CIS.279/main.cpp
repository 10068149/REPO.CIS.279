//  Created by CIS on 1/31/17.
//  Copyright © 2017 Anthony Nash. All rights reserved.
//

// FILE:            main.cpp
//
// Assignment 01:   Abstract Data Types and Classes CIS.279...
//
// Description:     A simplified calculator application that
//                  can be the prototype framework for an expansion
//                  model....
//
// Objective:       Setting A foundation for developing high-quality
//                  software by adhering to the basic principles of
//                  software engineering for designing and implementing
//                  programs to meet these goals....
//
// Name:            Anthony Nash
//
// GID:             G00948149
//
// Date:            February 1, 2017 (Wed)
//
// Environment:     Compiles under Apple Xcode ( Version 8.2.1 (8C1002) )















#include <iostream> // provides: INPUT OUTPUT STREAM DATA.
#include <climits>  // provides: SPECIFIC MAXIMUM SYSTEM AND...
                    // INTEGRAL TYPES COMPILER IMPLEMENTATION USED:
                    // INT is: INT_MAX

#include "calculator.hpp"



using namespace std;
using namespace ANTHONY_NASH_ADDSUBMULT;





// define static constants...
const int AddSubMult :: MIN_INT_VARIABLE_TYPE_SIZE = -2147483647;
const int AddSubMult :: MAX_INT_VARIABLE_TYPE_SIZE = 2147483647;





int main ()
{

    AddSubMult test_number;
    
    cout
    << "* Test Number; INITIALIZED: " << test_number.getTotal()
    << " ( Initial Value )."
    << endl
    << "* Test Number; PASSING: 1"
    << endl;
    
    test_number.addNum(1);
    
    cout
    << "* Test Number; TOTAL: " << test_number.getTotal()
    << endl << endl << endl;
    
    
    cout
    << "* Test Number; TOTAL: " << test_number.getTotal()
    << " ( Initial Value )."
    << endl
    << "* Test Number; PASSING: -1"
    << endl;
    
    test_number.addNum(-1);
    
    cout
    << "* Test Number; TOTAL: " << test_number.getTotal()
    << endl << endl << endl;
    
    
    
    
    
    
    
    cout << endl << endl << endl << endl;
    return 0;
}











