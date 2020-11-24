
#include"lab2lib.h"
bool is_sort(int* array, int size)
{
	bool ans = true;

	for (int j = 0;j < size - 1; j++)
	{
		if (array[j] <= array[j + 1])
		{
			ans = ans && true;
		}
		else
			ans = ans && false;
	}
	return ans;
}

bool is_Palindrome(string name)
{
    bool pali = true;
    int len = name.length();
    for (int i = 0;i < len - 1; i++)
    {
        char a = name[i];
        char b = name[len - i];
        if (name[i] == name[len - 1 - i])
        {
            pali = pali && true;
        }
        else
            pali = pali && false;
    }
    return pali;
}

void array_rows_cols(int** twoDimension, int rawsize, int colsize)
{

    for (int i = 0; i <= rawsize; ++i) {
        int rawsum = 0;
        int totalsum = 0;

        if (i == rawsize)
        {
            for (int h = 0; h < colsize; ++h)
            {
                int colsum = 0;
                for (int g = 0; g < rawsize; ++g)
                    colsum = colsum + twoDimension[g][h];
                cout << colsum << " ";
                totalsum += colsum;
            }
            cout << totalsum;
        }

        else
        {
            for (int j = 0; j < colsize; ++j)
            {
                cout << twoDimension[i][j] << "  ";
                rawsum = rawsum + twoDimension[i][j];
            }
            cout << rawsum << endl;
        }
    }
}

void swap_sort(int& a, int& b, int& c, bool order)
{
	int temp = 0;
	if (order == 0)//descending
	{

		if (a >= c && c >= b) {
			temp = c;
			c = b;
			b = temp;
		}
		if (b >= a && a >= c) {
			temp = a;
			a = b;
			b = temp;
		}
		if (b >= c && c >= a) {
			temp = b;
			b = a;
			a = c;
			c = temp;
		}
		if (c >= b && b >= a) {
			temp = c;
			c = a;
			a = temp;
		}
		if (c >= a && a >= b) {
			temp = c;
			c = a;
			a = b;
			b = temp;
		}

	}
	else
	{
		if (a <= c && c <= b) {
			temp = c;
			c = b;
			b = temp;
		}
		if (b <= a && a <= c) {
			temp = a;
			a = b;
			b = temp;
		}
		if (b <= c && c <= a) {
			temp = b;
			b = a;
			a = c;
			c = temp;
		}
		if (c <= b && b <= a) {
			temp = c;
			c = a;
			a = temp;
		}
		if (c <= a && a <= b) {
			temp = c;
			c = a;
			a = b;
			b = temp;
		}

	}
}

void shrink_array(int array[10])
{
	int j = 0;
	int i = 0;
	while (j < 10)
	{
		for (j = 0;j < 10;j++)
			if (i < 10)
			{
				array[j] = array[i] + array[i + 1];
				i += 2;
			}
			else
				array[j] = 0;

	}
}
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
