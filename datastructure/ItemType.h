enum RelationType { LESS, GREATER, EQUAL };
class ItemType {
private:
	int value;
public:
	ItemType();
	RelationType ComparedTo(ItemType) const;
	void Print(std::ostream&) const;
	void initialize(int);
};