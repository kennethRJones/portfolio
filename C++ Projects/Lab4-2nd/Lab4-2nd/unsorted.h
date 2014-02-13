//unsorted.h
//  MAX_ITEMS:     the maximum number of items on the list 
#include "itemType.h"
int const MAX_ITEMS = 1000;
class UnsortedType 
{
public:
  UnsortedType();       // Constructor
  void MakeEmpty();	// Function: Returns the list to 				//the empty state.
				// Post:  List is empty.
  bool IsFull() const;  // Function:  Determines whether 				//list is full.
 			      // Pre:  List has been initialized.
 			 // Post: Function value = (list is full)

  int GetLength() const;  // Function: Determines the number of 				     //elements in list.
  			     // Pre:  List has been initialized.
  	// Post: Function value = number of elements in list

  void RetrieveItem(int& item, bool& found);
  // Function: Retrieves list element whose key matches
  //item's key (if present).
  // Pre:  List has been initialized.
  // Key member of item is initialized.
  // Post: If there is an element someItem whose key
  //matches
  // item's key, then found = true and item is a copy of
 //someItem; otherwise found = false and item is unchanged.
  //List is unchanged.

  void InsertItem(int item);
  // Function: Adds item to list.
  // Pre:  List has been initialized.
  //       List is not full.
  //       item is not in list.
  // Post: item is in list.

  void DeleteItem(int item);
  // Function: Deletes the element whose key matches item's
  // key.
  // Pre:  List has been initialized.
  //       Key member of item is initialized.
  //       One and only one element in list has a key
  // matching item's
  //     key.
 // Post: No element in list has a key matching item's key.
  void DeleteItemAll(int item);

  void ResetList();
  // Function: Initializes current position for an  
  //iteration through
  // the list.
  // Pre:  List has been initialized.
  // Post: Current position is prior to list.

  void GetNextItem(int& item);
  // Function: Gets the next element in list.
  // Pre:  List has been initialized and has not been
  // changed since
  // last call.
  // Current position is defined.
  // Element at current position is not last in list.     
  // Post: Current position is updated to next position.
  //       item is a copy of element at current position.
   bool IsThere(ItemType item)const ;

private:
  int length;
  int info[MAX_ITEMS];
  int currentPos;
};
