#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int n;
    int sum = 0;
    cout << "number:";
    cin >> n;
    while (n > 0)
    {
        sum += (n % 10);
        n /= 10;
    }
    cout << "\n\n"
         << "sum=" << sum;
    cout << "\n\n\n"
         << "press any key to exit...";
    getch();
    return 0;
}