#include <iostream>
using namespace std;
int main()
{

    int x;
    int y;
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;
    int sum = x + y;
    cout << "Sum  is: " << sum << endl;
    int substract = x - y;
    cout << "Substraction  is: " << substract << endl;
    int product = x * y;
    cout << "Product  is: " << product << endl;

    if (y != 0)
    {
        int division = x / y;
        cout << "The devision is: " << division << endl;
        int reminder = x % y;
        cout << "Reminder is: " << reminder << endl;
    }
    else
    {
        cout << "Cannot perform devision, the devisor is 0" << endl;
    }

    return 0;
}