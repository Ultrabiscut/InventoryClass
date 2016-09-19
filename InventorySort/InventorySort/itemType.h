#ifndef _itemType_
#define _itemType_

#include <string>
using namespace std;

//define sorting object
struct itemType
{
	//memeber variables for sorting
	string ItemName;
	int Weight;
	int Quantity;
	int Value;
	string Type;
	int Bound;
};
#endif