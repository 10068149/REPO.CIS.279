//
//  unsorted.cpp
//  CIS.279
//
//  Created by CIS on 3/22/17.
//  Copyright © 2017 Anthony Nash. All rights reserved.
//

#include <iostream>
#include "unsorted.hpp"
#include "ItemType.hpp"

using namespace std;
//!!!
namespace ANTHONY_NASH_ASSIGNMENT_3 {
//CHANGED NAMESPACE; USING ONLY ONE SPACE INSTEAD OF TWO...
// !!!


    unsorted :: unsorted()
    
    // "Make Empty"
    // F(): Initializes list to empty state...
    // PRE: NONE
    // POST: List is empty...
    {
        //constructor code...
    }
    
    bool unsorted :: IsFull() const
    
    // F(): Determine whether list is full...
    // PRE: List has been initialaized...
    // POST: "F()" value is: list is full...
    {
        return false;
    }

    
    
    int unsorted :: GetLength() const
    
    // F(): Determins the number of elements in list...
    // PRE: List has been initialized ...
    // POST: F() = returns of elements in list
    {
        // ???
        // return length;
        // ??? WHY IS THIS NOT WORKING
        
        return 0;
    }
    
    ItemType unsorted :: GetItem( ItemType Item, bool& found) const
    
    // F():  Get list element whose key matches item’s key (if present)
    // PRE:  List has been initialized;
    //       Key member of item is initialized...
    
    // POST: If there is an elemnt some item whos keymatches item's
    //       key, then found = true and copy of someItem is
    //       returned; otherwise found = false and item is returned
    //       List unchnaged
    
    {
        return Item;
    }
    
    
    void unsorted :: PutItem(ItemType item)
    
    // F():  Puts item into list...
    // PRE:  1) List has been initialized; 2) List is not full;
    //       3) ITEM IS NOT IN LIST...
    
    // POST:  Item is in the list
    {
        //Puts item into list...
    }
    
    
    void unsorted :: DeleteItem(ItemType item)
    
    // F():  Deletes the element whose key matches item’s key...
    // PRE:  List has been initialized...
    // POST: One and only one element in list has a key matching item’s key...
    {
        //code to delet itmes...
    }
    
    void unsorted :: ResetList()
    // F():  current position for an iteration through the list...
    // PRE:  List has been initialized...
    // POST: Current  position is prior to list..
    {
        //code to: reste the list ...
    }
    
//    ItemType unsorted :: GetNextItem()
//    
//    // F(): Gets the next element in list...
//    // PRE: 1) List has been initialized..
//    //      2) Current position is defined..
//    //      3) Element at current position is not last in list..
//    
//    // POST: Current position is updated to next position;
//    //       returns a copy of element at current position...
//    
//    {
//    
//         return item.;
//    
//    }
//    
    
    


} // namespace ANTHONY_NASH_ASSIGNMENT_3 ...}

