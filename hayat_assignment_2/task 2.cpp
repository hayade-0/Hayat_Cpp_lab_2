#include <iostream>
#include <string>

using namespace std;

bool is_Palindrome(string name)
{
    bool pali = true;
    int len =name.length();
    for (int i = 0;i < len-1 ; i++)
    {
        char a = name[i];
        char b = name[len - i];
        if (name[i] == name[len-1 - i])
        {
            pali = pali && true;
        }
        else
            pali = pali && false;
    }
    return pali;
}
  /*int main()
{
    string  name;
    cout << "enter a string you think is palindram" << endl;
    cin >> name;
    cout << "is the string palindram : " << boolalpha << is_Palindrome(name) << endl;
}
*/