#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i < n; i++)
    {
        if ((n % i) == 0)
            return false;
    }
    return true;
}

// ===================== function to count prime number less than given input =====================================
// basic approach with T.C O(n ^ 2)
int cnt(int n)
{
    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
            count++;
        }
    }
    cout << endl;
    return count;
}

// ============================= Optimized approach =============================================== O(n log(log n))
int primeCount(int n)
{
    int count = 0;
    vector<bool> arr(n + 1, true);
    arr[0] = false;
    arr[1] = true;
    for (int i = 2; i < n; i++)
    {
        if (arr[i])
        {
            count++;
            cout << i << " ";
            for (int j = 2 * i; j < n; j = j + i)
            {
                arr[j] = false;
            }
        }
    }
    cout << endl;
    return count;
}
int main()
{
    int n;
    cout << "enter a number ";
    cin >> n;

    primeCount(n);

    return 0;
}