#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

enum RelationType {LESS, EQUAL, GREATER};
class ItemType
{
public:
	RelationType ComparedTo(ItemType)const;
private:
	int item;
};