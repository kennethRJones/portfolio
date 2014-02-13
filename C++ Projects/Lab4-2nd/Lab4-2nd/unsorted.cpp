// unsorted.cpp

#include "unsorted.h"
#include "itemType.h"

UnsortedType::UnsortedType()
{
  length = 0;
}
bool UnsortedType::IsFull() const
{
  return (length == MAX_ITEMS);
}

void UnsortedType::MakeEmpty() 
{
  length = 0;
} 

int UnsortedType::GetLength() const
{
  return length;
}
void UnsortedType::RetrieveItem(int& item, bool& found) 
// Pre:  Key member(s) of item is initialized. 
// Post: If found, item's key matches an element's key in //the list and a copy of that element has been stored in //item;  otherwise, item is unchanged. 
{
  bool moreToSearch;
  int location = 0;
  found = false;

  moreToSearch = (location < length);

  while (moreToSearch && !found) 
  {

	  if (item == info[location]){
		  found = true;
          item = info[location];
	  }
	  else {
		  location++;
          moreToSearch = (location < length);
	  }
  }
}
void UnsortedType::InsertItem(int item)
// Post: item is in the list.
{
  info[length] = item;
  length++;
}
void UnsortedType::DeleteItem(int item)
// Pre:  item's key has been initialized.
// An element in the list has a key that matches item's.
// Post: No element in the list has a key that matches //item's.
{
  int location = 0;

  while (item != info[location])
    location++;

  info[location] = info[length - 1];
  length--;
}
void UnsortedType::DeleteItemAll(int item)
{
	 bool moreToSearch,found;
  int location = 0;
  found= false;
  moreToSearch = (location < length);
  while (moreToSearch && !found || moreToSearch && found) 
  {
	  if  (item==info[location]){
		  found = true;
          item = info[location];
		  
          info[location] = info[length - 1];
          length--;
	  }
	  else 
	  {
		  location++;
          moreToSearch = (location < length);
	  }
	  
  }

}

void UnsortedType::ResetList()
// Post: currentPos has been initialized.
{
  currentPos = -1;
}

void UnsortedType::GetNextItem(int& item)
// Pre:  ResetList was called to initialized iteration.
//       No transformer has been executed since last call.
//       currentPos is defined.
// Post: item is current item.
//       Current position has been updated.
{
  currentPos++;
  item = info[currentPos];
}
bool UnsortedType::IsThere(ItemType item)
	{
     NodeType* location = listData;
     bool found = false;

     while (!found && location != NULL)
     {
       found = location->info.ComparedTo(item) == EQUAL;
       location = location->next;
     }
     return found;
	}
