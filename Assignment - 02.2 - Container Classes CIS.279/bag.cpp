//
//  bag.cpp
//  CIS.279
//
//  Created by CIS on 2/26/17.
//  Copyright © 2017 Anthony Nash. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include "bag.hpp"

using namespace std;
using namespace ANTHONY_NASH_BAG;

// EMPLEMENTATION: for functions used by this demonstration program:


//Inserts an item in the bag: VOID()
void bag_insert( const value_type& item )
//Pre: item + item.bag_count() <= CAPACITY
//Pro:
{
    
}






//Determines if an item is in the bag: BOOL()
bool bag_find()
{
    return true;
}






//Determines the number of copies of an item in the bag: VOID()
void bag_find_coppies( const value_type& item)
{
    //code...
}







//Determines the total number of items in the bag: VOID()
size_type bag_count()
{
    
    cout << "size_type bag_count() {...}" << endl;
    
//    for (int index =0; index < CAPACITY; index++) {
//        cout
//        << "Bag_DATA [ " << index
//        << " ]:" << bag_data [ index ];
//    }
    
    return 0;
}







//Removes (one) items from the bag: VOID()
bool bag_erase( value_type& item )
// Pre: The target (item) is actually in the bag;
// function removes one copy of target and returns true.
// Pro: If target is not in the bag, attempting to erase one
// copy has no effect on the bag, and the function returns false.
// (Chp.3, Pge6)
{
    return true;
}






//Removes all items from the bag: VOID()
size_type bag_erase_all()
{
    return 0;
}

