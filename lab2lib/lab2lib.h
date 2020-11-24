
#include<iostream>
#include<iostream>
#include<cstring>
#include <vector>
#include<array>
using namespace std;
bool is_sort(int* array, int size);
bool is_Palindrome(string name);
void array_rows_cols(int** twoDimension, int rawsize, int colsize);
void swap_sort(int& a, int& b, int& c, bool order);
void shrink_array(int array[10]);

class nameDatabase {
public:
	vector <string>individualName;
	void initialise();
	void insert();
	void search();
	void delet();
	void print();
};



