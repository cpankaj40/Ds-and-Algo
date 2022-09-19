#include <iostream>
#include <math.h>

using namespace std;

/*
 given number = 123
 if we have to write it in the same flow
 ans = 0;
 ans = (ans * 10) + bit // i.e 1
 ans = (0 * 10) + 1; // 1
 ans = (1 * 10) + 2; // 12
 ans = (12 * 10) + 3; // 13

 for opposite flow
 ans = 0
 ans = ( 1 * 10 ^ 0) + ans; // 1
 ans = (2 * 10 ^ 1) + 1; // 21
 ans = (3 * 10 ^ 2) + 21; // 321
*/
void decimalToBinary(int n)
{
    int i = 0;
    int ans = 0;
    while (n != 0)
    {
        int bit = n & 1; // get last bit of the given input

        ans = (bit * pow(10, i)) + ans; // placing the last bit in it's correct position
        n = n >> 1;                     // performing right shift
        i++;
    }
    cout << ans << endl;
}
void binaryTodecimal(int n)
{
    int i = 0;
    int ans = 0;
    while (n != 0)
    {
        int digit = n % 10;

        if (digit == 1)
            ans = ans + pow(2, i);

        n = n / 10;
        i++;
    }
    cout << ans << endl;
}

int main()
{
    int i;
    cout << "enter a number ";
    cin >> i;
    binaryTodecimal(i);
    return 0;
}