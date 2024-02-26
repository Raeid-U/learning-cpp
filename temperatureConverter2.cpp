#include <iostream>
#include <string>
using namespace std;

int userOP;
float userTemp;

void getTemp()
{
    cout << "Input the Temperature: ";
    cin >> userTemp;
}

void celsius()
{
    cout << "Your Temperature is: " << userTemp << "ºC\n";
    if (userOP == 1)
    {
        userTemp = (userTemp * 9 / 5) + 32;
        cout << "Your Converted Temperature is " << userTemp << "ºF\n";
    }
    else if (userOP == 3)
    {
        userTemp = userTemp + 273.15;
        cout << "Your Converted Temperature is " << userTemp << "K\n";
    }
}

void farenheit()
{
    cout << "Your Temperature is: " << userTemp << "ºF\n";
    if (userOP == 2)
    {
        userTemp = (userTemp - 32) * 5 / 9;
        cout << "Your Converted Temperature is " << userTemp << "ºC\n";
    }
    else if (userOP == 5)
    {
        userTemp = ((userTemp - 32) * 5 / 9) + 273.15;
        cout << "Your Converted Temperature is " << userTemp << "K\n";
    }
}

void kelvin()
{
    cout << "Your Temperature is: " << userTemp << "K\n";
    if (userOP == 4)
    {
        userTemp = userTemp - 273.15;
        cout << "Your Converted Temperature is " << userTemp << "ºC\n";
    }
    else if (userOP == 6)
    {
        userTemp = ((userTemp - 273.15) * 9 / 5) + 32;
        cout << "Your Converted Temperature is " << userTemp << "ºF\n";
    }
}

int main()
{
    cout << "\nWhat operation would you like to perform?\n";
    cout << "1 - Celsius to Farenheit\n";
    cout << "2 - Farenheit to Celsius \n";
    cout << "3 - Celsius to Kelvin\n";
    cout << "4 - Kelvin to Celsius\n";
    cout << "5 - Farenheit to Kelvin\n";
    cout << "6 - Kelvin to Farenheit\n";

    cout << "\n\nPlease input the # of your desired operation: ";
    cin >> userOP;

    if (userOP == 1 || userOP == 3)
    {
        getTemp();
        celsius();
    }
    else if (userOP == 2 || userOP == 5)
    {
        getTemp();
        farenheit();
    }
    else if (userOP == 4 || userOP == 6)
    {
        getTemp();
        kelvin();
    }

    cout << "\n \n";
    return 0;
}