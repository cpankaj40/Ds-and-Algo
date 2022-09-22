#include <iostream>
#include <vector>

using namespace std;

bool isValid(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9') || (ch >= 'A' && ch <= 'Z'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
char toLower(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
    {
        return ch;
    }
    else
    {
        char temp = (ch - 'A') + 'a';
        return temp;
    }
}
bool checkPalindrome(string s)
{
    // Write your code here.

    int i = 0;
    int e = s.length() - 1;
    string temp;
    while (i <= e)
    {
        if (isValid(s[i]))
        {
            char a = toLower(s[i]);
            temp.push_back(a);
        }
        i++;
    }
    i = 0;
    e = temp.length() - 1;
    while (i <= e)
    {
        if (temp[i] != temp[e])
        {

            return false;
        }
        i++;
        e--;
    }
    return true;
}

int main()
{
    string a = "A man, a plan, a canal: Panama";
    cout << " ans " << checkPalindrome(a) << endl;

    return 0;
}