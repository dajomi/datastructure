#include "unsortedtype.h"

UnsortedType::UnsortedType() {
	length = 0;
}
bool UnsortedType::IsFull() const {
	return (length == MAX_ITEMS);
}
int UnsortedType::LengthIs() const {
	return length;
}
void UnsortedType::RetrieveItem(ItemType& item, bool& found) {
	int location = 0;
	found = false;
	while ((location < length) && !found) {
		switch (item.ComparedTo(info[location])) {
		case LESS:
		case GREATER:
			location += 1; break;
		case EQUAL:
			found = true; item = info[location]; break;

		}
	}
}
void UnsortedType::InsertItem(ItemType item) {
	info[length] = item;
	length++;
}
void UnsortedType::DeleteItem(ItemType item) {
	int location = 0;
	while (item.ComparedTo(info[location]) != EQUAL) location++;
	info[location] = info[length - 1];
	length--;
}

