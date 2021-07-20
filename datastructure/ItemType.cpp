#include <iostream>
#include "ItemType.h"
using namespace std;
ItemType::ItemType() {
	value = 0;
}
RelationType ItemType::ComparedTo(ItemType Item) const{
	if (value < Item.value) return LESS;
	else if (value > Item.value) return GREATER;
	else return EQUAL;
}
void ItemType::Print(std::ostream& out) const {
	out << value;
}
void ItemType::initialize(int number) {
	value = number;
}