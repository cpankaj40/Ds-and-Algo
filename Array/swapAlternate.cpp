#include <iostream>
#include <vector>

using namespace std;

void swapAlternate(int *p, int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if ((i + 1) < n)
        {
            swap(p[i], p[i + 1]);
        }
    }
}
void printArray(int *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {2, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(int);
    swapAlternate(arr, size);
    printArray(arr, size);
    return 0;
}