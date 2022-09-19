#include <iostream>
#include <vector>

using namespace std;

int bitCount(uint32_t n)
{
    int count;
    while (n != 0)
    {
        if (n & 1) // to check if last bit is 1 or not we perform and operation with 1 and it will retrun 1 if last bit is 1 or 0 if vice versa
        {
            count++;
        }
        n = n << 1; // left shifting by 1
    }
    return count;
}

int main()
{
    int i;
    cout << "enter a number ";
    cin >> i;
    cout << endl;
    cout << " no of bits " << bitCount((uint32_t)i) << endl;
    return 0;
}