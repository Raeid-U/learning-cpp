#include <iostream>
#include <string>
using namespace std;

int main()
{
    // declare user input values
    int userTemp;
    string currentUnit;

    // initialize program
    cout << "\nTemperature Converter\n";
    cout << "Please input the Temperature and Unit\n \n";

    cout << "Input the Temperature: ";
    cin >> userTemp; // user prompt - temperature

    cout << "Input the Unit:\n";
    cout << "('F' for Farenheit and 'C' for Celsius)\n";
    cin >> currentUnit; // user prompt - unit

    if (currentUnit == "F" || currentUnit == "f")
    {
        cout << "Your Temperature is " << userTemp << "ºF\n";
        userTemp = (userTemp - 32) * 5 / 9;
        cout << "The Conveted Temperature us " << userTemp << "ºC\n"; // return
    }
    else if (currentUnit == "C" || currentUnit == "c")
    {
        cout << "Your Temperature is " << userTemp << "ºC\n";
        userTemp = (userTemp * 9 / 5) + 32;
        cout << "The Conveted Temperature us " << userTemp << "ºF\n"; // return
    }
    else
    {
        cout << "ERROR - Please Input Again\n"; // runs program again if error
        main();
    }
    return 0;
}
