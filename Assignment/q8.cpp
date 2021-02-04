#include <conio.h>
#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 50; i++)
    {

        if (i % 8 == 0)
        {
            cout << i << endl;
        }
    }
    getch();
    return 0;
}
