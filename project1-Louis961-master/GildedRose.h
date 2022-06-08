#pragma once
#include <vector>
#include <string>
using std::vector;
using  std::string;

class Item {

public:

	string name;
	int sellIn;
	int quality;
	Item(string, int, int);
};


Item::Item(string new_name, int new_sellIn, int new_quality)
	:name(new_name), sellIn(new_sellIn), quality(new_quality)
{}


class GildedRose {

private:

	vector<Item> items;

public:

	GildedRose();		
	~GildedRose();		
	size_t size() const;
	Item& get(size_t);
	void add(const Item&);
	Item& operator[](size_t);

};

//default constructor
GildedRose::GildedRose()		

{}


GildedRose::~GildedRose()

{}

//number of items in vector 
size_t GildedRose::size() const
{
	return items.size();
}

//returns value of items in vector at index
Item& GildedRose::get(size_t index)
{
	return(items[index]);
}

//adds an item to the inventory
void GildedRose::add(const Item &item)
{
	items.push_back(item);
}

//returns value of items in vector at index using operator[]
Item& GildedRose::operator[](size_t index)
{
	return(items[index]);
}
