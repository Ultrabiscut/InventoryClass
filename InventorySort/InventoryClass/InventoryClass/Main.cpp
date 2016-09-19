#include <iostream>
#include <iomanip>
#include "inventoryItem.h"
using namespace std;

//Program:		InventoryClass
//Author:		Tyler Timmins
//Class:		ITSE 2331-2001
//Description:	An inventory class program that can hold information and
//				calculate data for items in a retail store's inventory.



int main()
{
	//declare variables
	double dSum = 0;

	//declare array of 5 inventoryItem objects
	inventoryItem inventoryItem[5];
	
	//put stuff in for chips array item [0]
	inventoryItem[0].setItemNumber(1000);
	inventoryItem[0].setDescription("Bag of chips");
	inventoryItem[0].setQuantity(5);
	inventoryItem[0].setCost(2.55);
	inventoryItem[0].setTotalCost();

	//put stuff in for soda array item [1]
	inventoryItem[1].setItemNumber(2000);
	inventoryItem[1].setDescription("Can of soda");
	inventoryItem[1].setQuantity(2);
	inventoryItem[1].setCost(1.75);
	inventoryItem[1].setTotalCost();

	//put stuff in for candy array item [2]
	inventoryItem[2].setItemNumber(3000);
	inventoryItem[2].setDescription("Bag of candy");
	inventoryItem[2].setQuantity(1);
	inventoryItem[2].setCost(1.15);
	inventoryItem[2].setTotalCost();

	//put stuff in for shoes array item [3]
	inventoryItem[3].setItemNumber(4000);
	inventoryItem[3].setDescription("Box of shoes");
	inventoryItem[3].setQuantity(1);
	inventoryItem[3].setCost(89.99);
	inventoryItem[3].setTotalCost();

	//put stuff in for shirts array item [4]
	inventoryItem[4].setItemNumber(5000);
	inventoryItem[4].setDescription("Some shirts");
	inventoryItem[4].setQuantity(4);
	inventoryItem[4].setCost(45.99);
	inventoryItem[4].setTotalCost();

	//loop throught the array and display
	cout << "Description \t"
		<< "	Item Number \t"
		<< "Quantity \t"
		<< "Cost \t"
		<< "  Total Cost \n";
	cout << "----------------------------------------------------------------------------\n";

	for (int x = 0; x < 5; x++)
	{
		cout << fixed << setprecision(2);

		cout << left << setw(20) << inventoryItem[x].getDescription() << "\t"
			<< right << setw(7) << inventoryItem[x].getItemNumber() << "\t"
			<< setw(12) << inventoryItem[x].getQuantity() << "\t"
			<< setw(12) << inventoryItem[x].getCost() << "\t"
			<< setw(10) << inventoryItem[x].getTotalCost() << "\n";

		//accumulate
		dSum = dSum + inventoryItem[x].getTotalCost();

	}
	cout << "----------------------------------------------------------------------------\n";
	cout << endl;

	//display the total cost of everything
	cout << "The Total Cost of all items is: " << dSum << endl;

	cout << endl;



	return 0;
}