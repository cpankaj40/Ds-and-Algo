#include <iostream>
#include <vector>
using namespace std;

int duplicateElement(vector<int> &arr)
{
    int size = arr.size();
    int sum = 0;
    int idealSum = (size * (size - 1)) / 2;
    for (auto i : arr)
    {
        sum += i;
    }
    return sum - idealSum;
}

int main()
{
    vector<int> arr = {6, 3, 1, 5, 4, 2, 2};
    cout << "duplicate " << duplicateElement(arr) << endl;
    return 0;
}