#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int n;
    int count = 0;
    cout << "number:";
    cin >> n;
    while (n > 0)
    {
        count++;
        n /= 10;
    }
    cout << "\n\n"
         << "count=" << count;
    cout << "\n\n\n"
         << "press any key to exit...";
    getch();
    return 0;
}