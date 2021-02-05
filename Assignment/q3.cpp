#include <iostream>
using namespace std;
int main()
{
    double temp_celcius, temp_farhenhiet;
    cout << "Temperature in Celcius\n";
    cin >> temp_celcius;
    temp_farhenhiet = temp_celcius * 33.8;
    cout << "The temperature in fahrenheit is " << temp_farhenhiet << " F";
    return 0;
}
