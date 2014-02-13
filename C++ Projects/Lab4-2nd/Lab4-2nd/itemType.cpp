#include "ItemType.h"

RelationType ItemType::ComparedTo(ItemType otherItem) const
{
        if(item < otherItem.item)
                return LESS;
        else if(item > otherItem.item)
                return GREATER;
        else return EQUAL;
}