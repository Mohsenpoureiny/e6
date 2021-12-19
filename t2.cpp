#include <iostream>

using namespace std;
int func(int x)
{
    return (3 * x) + 2;
}
int main()
{
    for (int i = 2; i <= 10; i++)
    {
        cout << func(i) << endl;
    }

    return 0;
}