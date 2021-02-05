#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number" << endl;
    cin >> num;
    if (num % 4 == 0)
    {
        cout << "The number is DIVISIBLE by 4" << endl;
    }
    else
    {
        cout << "The number is not DIVISIBLE by 4" << endl;
    }

    return 0;
}
