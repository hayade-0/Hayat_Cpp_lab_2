#include <iostream>
#include <stdio.h>
#include<array>
using namespace std;

bool is_sort(int* array, int size)
{
bool ans = true;

	for (int j = 0;j < size-1; j++)
	{
		if (array[j] <= array[j + 1])
		{
			ans = ans && true;
		}
		else
			ans = ans && false;
	}
	return ans;
}/*
int main()
{
	int size;
	int element;
	
	
		cout << "enetr the size of the arrat";
		cin >> size;
		int* array = new int[size] ;
		for (int i=0;i<size;i++)
		{
			cout << "enter integer  " << i+1 << endl;;
			cin >> element;
			array[i] = element;
		}
		cout << "is it in acending order?" << boolalpha << is_sort(array,size);
}*/


