#include <iostream>
#include <pthread.h>

using namespace std;


void isUpper(char &ch)
{
    if(ch >= 65 && ch <= 90)
    {
        cout << "It is an upper case " << endl;
    }
    else if(ch >= 97 && ch <= 122)
    {
        cout << "It is an lower case " << endl;
    }
    else 
    {
        cout << "it is an int " << endl;
    }
    return;
}

int main()
{
    char ch;
    cout << "Enter your char " << endl;
    cin >> ch;
    isUpper(ch);

    return 1;

}