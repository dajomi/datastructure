#include <iostream>
#include "ItemType.h"
#define MAX_ITEMS 20

class UnsortedType
{
private:
	int length;
	ItemType info[MAX_ITEMS];
	int currentPos;
public:
	UnsortedType();
	//observers
	bool IsFull() const;
	int LengthIs() const;
	void RetrieveItem(ItemType& item, bool& found);
	//transformers
	void InsertItem(ItemType item);
	void DeleteItem(ItemType item);
};