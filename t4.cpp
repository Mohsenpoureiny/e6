#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int main()
{
    float sum;
    int count;
    while (true)
    {
        float i;
        cin >> i;
        if (i >= 0)
        {
            sum = sum + i;
            count++;
        }
        else
        {
            break;
        }
    }
    cout << sum / count;
    getch();
    return 0;
}