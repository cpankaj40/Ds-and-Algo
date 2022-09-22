#include <iostream>
#include <vector>

using namespace std;

char getMaxCharacter(string s)
{
    int i = 0;
    int e = s.length() - 1;
    int arr[26] = {0};
    for (; i < s.length(); i++)
    {
        int index = -1;
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            index = s[i] - 'a';
        }
        else
        {
            index = s[i] - 'A';
        }
        ++arr[index];
    }
    int max = -1;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] == max)
        {
            return i + 'a';
        }
    }
}

int main()
{
    string n = "a";
    cout << " ans --- > " << getMaxCharacter(n) << endl;
    return 0;
}