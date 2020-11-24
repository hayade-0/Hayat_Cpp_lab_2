// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"lab2lib.h"
using  namespace std;


int main()
{
	int choice;
	cout << "Menu: \n     1: Task 1\n     2: Task 2\n     3: Task 3\n     4: Task 4\n     5 :  Task 5\n     6: Task 6\n     -1: Exit" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1: 
	{
		int size;
		int element;
		cout << "enetr the size of the arrat";
		cin >> size;
		int* array = new int[size];
		for (int i = 0;i < size;i++)
		{
			cout << "enter integer  " << i + 1 << endl;;
			cin >> element;
			array[i] = element;
		}
		cout << "is it in acending order?" << boolalpha << is_sort(array, size);
	}
	case 2:
	{
		string  name;
		cout << "enter a string you think is palindram" << endl;
		cin >> name;
		cout << "is the string palindram : " << boolalpha << is_Palindrome(name) << endl;
	}
	case 3:
	{
		int m, n;
		cout << "enter the number of raw \n";
		cin >> m;
		cout << "enter the number of colomn \n";
		cin >> n;
		int** twoDimension = new int* [m];
		for (int i = 0;i < m;i++)
			twoDimension[i] = new int[n];
		for (int i = 0;i < m;i++)
		{
			for (int j = 0;j < n;j++)
				twoDimension[i][j] = (rand() % 9);
		}
		array_rows_cols(twoDimension, m, n);
	}
	case 4:
	{
		bool oneMore = true;
		bool order;
		int a, b, c;
		while (oneMore == true)
		{
			cout << ("give a (0 to quit)") << endl;
			cin >> a;
			if (a == 0) {
				cout << "Good Bye!";
				oneMore = false;
				break;
			}
			cout << ("give b ") << endl;
			cin >> b;
			cout << ("give c") << endl;
			cin >> c;
			cout << "Sort ascending/descending (1/0)";
			cin >> order;
			swap_sort(a, b, c, order);
			cout << "result:  " << a << " ," << b << " ," << c << ".";
		}
	}
	case 5:
	{
		int arr[] = { 5, 5, 7, 6, 2, 2, 11, 11, 5, 4 };
		cout << "input array:";
		for (int i = 0;i < 10;i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
		shrink_array(arr);
		cout << "output array:";
		for (int i = 0;i < 10;i++) {
			cout << arr[i] << " ";
		}
	}
	case 6:
	{
		nameDatabase Test;
		bool running = true;
		string selection;
		while (running == true)
		{
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
				cout << "Good Bay!";
				break;
			}
		}
	}
	case -1:
	{
		return 0;
		break;
	}
	default:
		cout << "sory no such Task!";
	}
	}