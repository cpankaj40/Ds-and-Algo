#include <iostream>
#include <vector>

using namespace std;

// ============ function to return the subtraction of product and sum of digits of an integer =================

int subtractProductAndSum(int n)
{
    int sum = 0;
    int product = 1;
    while (n != 0)
    {
        int digit = n % 10;
        product *= digit;
        sum += digit;
        n = n / 10;
    }
    return product - sum;
}
int main()
{
    int n;
    cout << "enter a number ";
    cin >> n;
    cout << endl;
    cout << "ans " << subtractProductAndSum(n);
    return 0;
}