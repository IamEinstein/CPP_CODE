/* 4.	To accept 2 numbers and find their sum, difference, product,
 quotient and remainder (use % operator to find the remainder) */
#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter the 1st number" << endl;
    cin >> num1;
    cout << "Enter the 2nd number" << endl;
    cin >> num2;
    float multi, div, add, minus, rem;
    multi = num1 * num2;
    div = num1 / num2;
    add = num1 + num2;
    minus = num1 - num2;
    rem = num1 % num2;
    cout << num1 << " mutliplied by " << num2 << " equals " << multi << endl;
    cout << num1 << " divided by " << num2 << " equals " << div << "and the remainder here is " << rem << endl;

    cout << num1 << " added to " << num2 << " equals " << add << endl;
    cout << num1 << " minus  " << num2 << " equals " << minus << endl;
    return 0;
}
