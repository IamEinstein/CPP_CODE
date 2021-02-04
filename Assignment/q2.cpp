#include <conio.h>
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number" << endl;
    cin >> num;
    cout << "The square of " << num << " is " << num * num << " and its cube is " << num * num * num;
    getch();
    return 0;
}
