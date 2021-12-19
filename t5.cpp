#include <iostream>
#include <math.h>

using namespace std;

void binary(int n)
{
    int binerry[32];
    int i = 0;
    while (n > 0)
    {
        binerry[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        cout << binerry[j];
}

int main()
{
    int n;
    cout << "number:";
    cin >> n;
    binary(n);
    return 0;
}