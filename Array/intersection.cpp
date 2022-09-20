#include <iostream>
#include <vector>

using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    // Write your code here.
    vector<int> ans;
    int index_1 = 0;
    int index_2 = 0;
    while (index_1 < n && index_2 < m)
    {
        if (arr1[index_1] == arr2[index_2])
        {
            ans.push_back(arr1[index_1]);
            index_1++;
            index_2++;
        }
        else if (arr1[index_1] > arr2[index_2])
        {
            index_2++;
        }
        else
        {
            index_1++;
        }
    }
    if (ans.size())
    {
        return ans;
    }
    else
    {
        ans.push_back(-1);
        return ans;
    }
}

int main()
{
    vector<int> arr = {1, 2, 2, 2, 3, 4};
    vector<int> arr_1 = {3, 4};
    vector<int> a = findArrayIntersection(arr, 3, arr_1, 2);
    for (auto i : a)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}