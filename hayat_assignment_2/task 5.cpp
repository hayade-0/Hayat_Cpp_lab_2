#include<iostream>
using namespace std;
void shrink_array(int array[10])
{
	int j = 0;
	int i = 0;
	while(j < 10)
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
/*int main() {
	int arr[] = { 5, 5, 7, 6, 2, 2, 11, 11, 5, 4 };
	cout << "input array:";
		for (int i = 0;i < 10;i++) {
			cout << arr[i] << " " ;
	}
		cout << endl;
	shrink_array(arr);
	cout << "output array:";
	for (int i = 0;i < 10;i++) {
		cout << arr[i] << " ";

	}
}*/