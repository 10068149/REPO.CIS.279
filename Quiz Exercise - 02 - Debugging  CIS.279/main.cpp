//
//  main.cpp
//  Quiz Exercise - 02 - Debugging  CIS.279
//
//  Created by Anthony Nash on 1/28/17.
//  Copyright © 2017 Anthony Nash. All rights reserved.
//







#include <iostream> // for INPUT/OUTPUT
#include <cassert>  // for ASSERT()
#include <cstdlib>  // for RAND() & SRAND()
#include <time.h>   // for SYSTEM TIME FUNCTIONS() ...

using namespace std;



int sqr ( int ); //function declaration; Square root: sqr()...
void printer ( int );//
int MAX_INT_VALUE_SIZE = 2147483647;


int main () {
    
    
    srand( time(0) );
    
    int input =0;
    
    
    cout
    << "// This app is designed to test for the following ranges" << endl
    << "// of INT type variables, "
    << "respectively, for both positive " << endl
    << "// and negative inputs values..." << endl << endl
    << "* NOTE: The maximum allowed value for INT variable types is: 2147483647."
    << endl << endl << endl << endl;
    
    
    
    
    //Range A: negative inputs whose results is too large to fit (error)
    cout
    << "// Range A: negative inputs whose results is too large to fit (error):"
    << endl;
    
    input = -46341;
    printer( input );
    
    //Range B: negative inputs whose result is acceptable (normal)
    cout
    << "// Range B: negative inputs whose result is acceptable (normal): "
    << endl;
    
    input = -( ( rand() % 46339) + 1) ;
    printer( input );
    
    //Range C: positive inputs whose result is acceptable (normal)
    cout
    << "// Range C: positive inputs whose result is acceptable (normal): "
    << endl;
    
    input = ( rand() % 46339 ) + 1;
    printer( input );
    
    
    //Range D: positive input whose result is too large to fit (error)
    cout
    << "// Range D: positive input whose result is too large to fit (error): "
    << endl;
    
    input = 46341;
    printer( input );
    
    
    
    
    cout
    << endl << endl ;
    
    return 0;
    
}




int sqr ( int input ) {
    return ( input * input );
}



void printer ( int input ) {
    
    cout
    << endl
    << "- INPUT: " << input << endl
    << "- FUNCTION CALL: SQR( " << input << " );" << endl;
    
    int range = sqr( input );
    
    assert( (input*input) == range );
    
    if ( (input < MAX_INT_VALUE_SIZE) && (range >= 0) ) {
        
        cout
        << "- FUNCTION RETURN: " << range << endl
        << "- RESULTS: This input, " << input << ", when squared, is in the"
        << " expected" << endl
        << "  range of INT type variables."
        << endl << endl << endl;
        
    } else
    {
        cout
        
        << "* ERROR: " << range << endl
        << "  This input, " << input << ", when squared, is out of range " << endl
        << "  of the maximum value allowed for an INT type " << endl
        << "  variable!"
        
        << endl
        << "* NOTE: The maximum allowed value for INT variables respectively is: 2147483647."
        
        << endl << endl << endl << endl ;
    }
    
    
    
    
}



/* --------- OUTPUT: START ----------------------------------------------------
 
 // This app is designed to test for the following ranges
 // of INT type variables, respectively, for both positive
 // and negative inputs values...
 
 * NOTE: The maximum allowed value for INT variable types is: 2147483647.
 
 
 
 // Range A: negative inputs whose results is too large to fit (error):
 
 - INPUT: -46341
 - FUNCTION CALL: SQR( -46341 );
 * ERROR: -2147479015
 This input, -46341, when squared, is out of range
 of the maximum value allowed for an INT type
 varable!
 * NOTE: The maximum allowed value for INT variables is: 2147483647.
 
 
 
 // Range B: negative inputs whose result is acceptable (normal):
 
 - INPUT: -28764
 - FUNCTION CALL: SQR( -28764 );
 - FUNCTION RETURN: 827367696
 - RESULTS: This input, -28764, when sqaured, is in the expsected
 range of INT type variables.
 
 
 // Range C: positive inputs whose result is acceptable (normal):
 
 - INPUT: 3845
 - FUNCTION CALL: SQR( 3845 );
 - FUNCTION RETURN: 14784025
 - RESULTS: This input, 3845, when sqaured, is in the expsected
 range of INT type variables.
 
 
 // Range D: positive input whose result is too large to fit (error):
 
 - INPUT: 46341
 - FUNCTION CALL: SQR( 46341 );
 * ERROR: -2147479015
 This input, 46341, when squared, is out of range
 of the maximum value allowed for an INT type
 varable!
 * NOTE: The maximum allowed value for INT variables is: 2147483647.
 
 
 
 
 
 Program ended with exit code: 0
 
 --------- OUTPUT: END ------------------------------------------------------*/









