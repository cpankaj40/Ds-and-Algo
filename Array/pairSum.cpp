#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> pairSum(vector<int> r, int sum)
{
    vector<vector<int>> ans;
    int index = 0;
    for (int i = 0; i < r.size() - 1; i++)
    {

        for (int j = i + 1; j < r.size(); j++)
        {
            int s = r[i] + r[j];
            if (s == sum)
            {
                vector<int> a;
                if (r[i] < r[j])
                {
                    a.push_back(r[i]);
                    a.push_back(r[j]);
                }
                else
                {
                    a.push_back(r[j]);
                    a.push_back(r[i]);
                }

                ans.push_back(a);
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}
int main()
{
    vector<int> a = {2, -3, 3, 3, -2};
    cout << "enter a num ";
    int sum;
    cin >> sum;
    vector<vector<int>> ans = pairSum(a, sum);
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}