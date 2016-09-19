#ifndef _INVENTORY_
#define _INVENTORY_

using namespace std;
#include <string>

class inventoryItem
{
private:
	int itemNumber;
	string description;
	int quantity;
	double cost;
	double totalCost;

public:
	inventoryItem();//default constructor member variables are 0
	inventoryItem(int, string, double, int); //paramterized constructor
	~inventoryItem(); //destructor

	//MUTATOR'S - will change
	void setItemNumber(int);
	void setDescription(string);
	void setQuantity(int);
	void setCost(double);
	void setTotalCost();
	
	//ACCESSOR'S - won't change
	int	getItemNumber();
	string getDescription();
	int getQuantity();
	double getCost();
	double getTotalCost();
	
};

#endif