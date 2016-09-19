#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include "itemType.h"
using namespace std;

//Program: InventorySort
//Author: Tyler Timmins
//Class: ITSE 2331 2001
//Description: Takes an inventory list and sorts them depending
//	on what the user specified and displays it to them.


//function prototypes:
void LoadInventory(itemType item[]);
void SortInventory(itemType inv[], int NumElms, char cLetter);
void DisplayInventory(itemType inven[]);

int main()
{
	//declare variables
	char cSelection;
	
	//display menu
	cout << "Select sort field: " << endl;
	cout << "	(I)tem name" << endl;
	cout << "	(W)eight" << endl;
	cout << "	(V)alue" << endl;
	cout << "Enter Selection: ";
	cin >> cSelection;
	cSelection = toupper(cSelection);

	//declare array(s)
	itemType arrayInventory[10];

	//call on functions Load, Sort, then Display
	LoadInventory(arrayInventory);
	SortInventory(arrayInventory, 10, cSelection);
	DisplayInventory(arrayInventory);


	return 0;
}

void LoadInventory(itemType stuff[])
{
	//declare variables
	ifstream inputFile;

	//open the file
	inputFile.open("inventory.txt");

	while (!inputFile.eof())
	{
		//reading whats in inventory.txt
		for (int x = 0; x < 10; x++)
		{
			inputFile >> stuff[x].ItemName; //read item name store in stuff
			inputFile >> stuff[x].Weight; //read item weight store in stuff
			inputFile >> stuff[x].Value; //read item value store in stuff
			inputFile >> stuff[x].Type; //read item type store in stuff
			inputFile >> stuff[x].Quantity; //read item quantity store in stuff
			inputFile >> stuff[x].Bound; //read item bound store in stuff
		}
	}
	inputFile.close();
}

void SortInventory(itemType inv[], int NumElms, char cLetter)
{
	bool blSwap; //flag to store whether or not a swap occured

	//loop for number of elements
	for (int x = 0; x < NumElms; x++)
	{
		blSwap = false; //reset the flag to false

		//loop through the array
		for (int y = 0; y < NumElms - 1; y++) //loop to last index - 1
		{

			//compare current element ot next element
			// > for ascending (Least to Greatest)
			// < for descending (Greatest to Least)
			if (cLetter == 'I')
			{
				if (inv[y].ItemName > inv[y + 1].ItemName)
				{
					itemType Swap; //need a swap varaiable, must match array dataType
					Swap = inv[y]; //do the swap variable first
					inv[y] = inv[y + 1]; //1st index is safe, therefore safe to swap
					inv[y + 1] = Swap; //finally take swap variable and store in 2nd spot
					blSwap = true; //a swap happened, set the flag
				}
			} //end of swap ItemName

			if (cLetter == 'W')
			{
				if (inv[y].Weight > inv[y + 1].Weight)
				{
					itemType Swap; //need a swap varaiable, must match array dataType
					Swap = inv[y]; //do the swap variable first
					inv[y] = inv[y + 1]; //1st index is safe, therefore safe to swap
					inv[y + 1] = Swap; //finally take swap variable and store in 2nd spot
					blSwap = true; //a swap happened, set the flag
				}
			}//End of swap Weight

			if (cLetter == 'V')
			{
				if (inv[y].Value > inv[y + 1].Value)
				{
					itemType Swap; //need a swap varaiable, must match array dataType
					Swap = inv[y]; //do the swap variable first
					inv[y] = inv[y + 1]; //1st index is safe, therefore safe to swap
					inv[y + 1] = Swap; //finally take swap variable and store in 2nd spot
					blSwap = true; //a swap happened, set the flag
				}
			}//End of swap Value

		}//end of the inner loop

		if (blSwap == false) //if swap never happened, array sorted
			break; //jump out of the outer loop

	} // end of the bubble sort
}

void DisplayInventory(itemType inven[])
{
	cout << "Item Name \t"
		<< "	Weight \t"
		<< "Value \t"
		<< "Type \t"
		<< "Quantity\t"
		<< "Bound \n";

	cout << "---------------------------------------------------------------------\n";

	for (int x = 0; x < 10; x++)
	{
		cout << left << setw(20) << inven[x].ItemName << "\t"
			<< right << setw(2) << inven[x].Weight << "\t"
			<< setw(5) << inven[x].Value << "\t"
			<< inven[x].Type << "\t"
			<< setw(2) << inven[x].Quantity << "\t"
			<< setw(10) << inven[x].Bound << "\n";
			
	}
}