#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = 1; i <= a; i++)
    {
        if (i <= 2 || i > a - 2)
        {
            for (int t = 1; t <= a; t++)
            {
                cout << "@";
            }
        }
        else
        {
            for (int r = 1; r <= 2; r++)
            {
                cout << "@";
            }
            for (int m = 1; m <= b; m++)
            {
                cout << " ";
            }
            for (int l = 1; l <= 2; l++)
            {
                cout << "@";
            }
        }
        cout << endl;
    }
    return 0;
}