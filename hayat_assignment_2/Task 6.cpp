#include<iostream>
#include<cstring>
#include <vector>
#include"Task 6.h"
void nameDatabase::initialise()
{
	string confirm;
	cout << "are you sure? yes/no" << endl;
	cin >> confirm;
	if (confirm == "yes") {
		nameDatabase::individualName.clear();
	}
}

void nameDatabase::insert()
{
	bool repeating = true;
	while (repeating == true)
	{
		string newName;
		cout << "enter name to insert. inter Q or q to stop" << endl;
		cin >> newName;
		if ((newName == "Q" || newName == "q") && newName.length() == 1) {
			repeating = false;
			break;
		}
		else
			individualName.push_back(newName);

	}
}

void nameDatabase::search()
{
	string searchKey;
	int NoN = 0;
	cout << "insert searchKey" << endl;
	cin >> searchKey;
	cout << "the name that is found in the data bease are: ";
	for (int i = 0;i < individualName.size();i++) {
		if (individualName[i].find(searchKey) != string::npos)
		{
			cout << individualName[i] << " ";
			NoN = 1;
		}
		if ((i == individualName.size() - 1) && NoN == 0)
				cout << "NONE" << endl;
	
			


	}
}

void nameDatabase::delet()
{
	string rabbishName;
	cout << "enter name to delet" << endl;
	cin >> rabbishName;
	for (int i = 0;i < individualName.size();i++) {
		if (rabbishName == individualName[i])
			individualName.erase(individualName.begin() + i);

	}
}

void nameDatabase::print()
{
	for (int i = 0;i < individualName.size();i++) {
		cout << individualName[i] << " ";
	}
	cout << endl;
}

/*int main() {
	nameDatabase Test;
	bool running = true;
	string selection;
	while (running == true) {
		cout << " MENU:" << endl << endl;
		cout << "initialise \ninsert \n search\n delete \n print \n quit \n   Make your choice :" << endl;
		cin >> selection;
		if (selection == "initialise")
			Test.initialise();
		if (selection == "insert")
			Test.insert();
		if (selection == "search")
			Test.search();
		if (selection == "delete")
			Test.delet();
		if (selection == "print")
			Test.print();
		if (selection == "quit") {
			cout<<"Good Bay!";
			break;
		}
	}
}*/