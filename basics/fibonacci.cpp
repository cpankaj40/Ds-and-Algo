#include <iostream>
#include <string>

using namespace std;
void fibonacci(int n)
{
    int i = 0;
    int j = 1;
    int sum = 0;
    cout << i << " " << j << " ";
    while (n--)
    {
        sum = i + j;
        cout << sum << " ";
        i = j;
        j = sum;
    }
    cout << endl;
    return;
}
int main()
{
    int n;
    cout << "enter a number ";
    cin >> n;
    fibonacci(n);
    return 0;
}