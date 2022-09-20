#include <iostream>
#include <vector>

using namespace std;

int maxElement(int *ptr, int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (ptr[i] > max)
        {
            max = ptr[i];
        }
    }
    return max;
}
int minElement(int *ptr, int n)
{
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (ptr[i] < min)
        {
            min = ptr[i];
        }
    }
    return min;
}

int main()
{
    int size;
    cin >> size;

    int *ptr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> ptr[i];
    }
    cout << "max Element " << maxElement(ptr, size) << endl;
    cout << "min Element " << minElement(ptr, size) << endl;
    delete[] ptr;
    return 0;
}