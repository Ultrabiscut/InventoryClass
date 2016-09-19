#include "inventoryItem.h"

//This file is where we are going to write the
//code for how each member function works for 
//the inventoryItem class.

//returnType className::functionName(formal params)

//define the default constructor
inventoryItem::inventoryItem()
{
	itemNumber = 0;
	description = "";
	quantity = 0;
	cost = 0;
	totalCost = 0;

}



//define the constructor #2
inventoryItem::inventoryItem(int item, string name, double price, int amount)
{
	itemNumber = item;
	description = name;
	quantity = amount;
	cost = price;

	setTotalCost();
}

//define a destructor? (is this needed???)
inventoryItem::~inventoryItem()
{

}

//define the setItemNumber(int) function
void inventoryItem::setItemNumber(int item)
{
	itemNumber = item;
}

//define the setDescription(string) function
void inventoryItem::setDescription(string name)
{
	description = name;
}

//define the setQuantity(int) function
void inventoryItem::setQuantity(int amount)
{
	quantity = amount;
	setTotalCost();
}

//define the setCost(double) function
void inventoryItem::setCost(double price)
{
	cost = price;
	setTotalCost();
}

//define the setTotalCost(double) function
void inventoryItem::setTotalCost()
{
	totalCost = quantity * cost;
}

//returning functions (ACCESSORS)

//define int getItemNumber
int inventoryItem::getItemNumber()
{
	return itemNumber;
}

//define string getDescription
string inventoryItem::getDescription()
{
	return description;
}

//define int getQuantity
int inventoryItem::getQuantity()
{
	return quantity;
}

//define double getCost
double inventoryItem::getCost()
{
	return cost;
}

//define double getTotalCost
double inventoryItem::getTotalCost()
{
	return totalCost;
}