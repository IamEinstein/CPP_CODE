#include <conio.h>
#include <iostream>
using namespace std;
int main()
{
    int radius;
    cout << "Enter the radius ";
    cin >> radius;
    cout << "The circumfrence is " << radius * 3.14 * 2;
    getch();
    return 0;
}
