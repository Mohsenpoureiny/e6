#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int r = 1; r <= n - i; r++)
        {
            cout << "*";
        }
        for (int l = 1; l <= i; l++)
        {
            cout << l;
        }
        cout << endl;
    }
    return 0;
}