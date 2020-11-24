#include <iostream> 
#include <cstdlib> 
using namespace std;

// Function to calculate sum of each row 
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
                cout << twoDimension[i][j]<<"  ";
                rawsum = rawsum + twoDimension[i][j];
            }
            cout << rawsum << endl;
        }
    }
}







// Driver code 
 /*int main()
   {


    int m,n;
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

}*/