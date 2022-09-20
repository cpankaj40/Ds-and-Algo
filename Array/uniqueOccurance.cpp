#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool uniqueOccurrences(vector<int> &arr)
{

    int size = arr.size();
    int i = 0;
    sort(arr.begin(), arr.end());
    vector<int> ans;
    while (i < size)
    {
        int count = 1;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
            else
            {
                break;
            }
        }
        cout << count << endl;
        ans.push_back(count);
        i = i + count;
    }
    size = ans.size();
    sort(ans.begin(), ans.end());
    for (int i = 0; i < size - 1; i++)
    {
        if (ans[i] == ans[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    vector<int> arr = {1, 2, 2, 1, 1, 3};

    cout << "ans " << uniqueOccurrences(arr) << endl;
}