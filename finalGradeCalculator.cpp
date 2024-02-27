#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

int numGrades;
double placeHolderGrade;
float placeHolderWeight;

float weightAchieved;
float totalWeight;

float finalGrade;

void obtain()
{
    cout << "\nGrade Calculator Launched\n";
    cout << "\nHow many Assignments/Tests/Grades will you input?\n";
    cin >> numGrades;

    cout << "\n\n Please Input the Grades you have achieved and their weights\n";

    for (int i = 1; i <= numGrades; i++)
    {
        cout << "\n";
        cout << " Marked Item #" << i << ": ";
        cin >> placeHolderGrade;
        placeHolderGrade = (placeHolderGrade / 100);
        cout << " Weight for Marked Item #" << i << ": ";
        cin >> placeHolderWeight;

        totalWeight = totalWeight + placeHolderWeight;
        weightAchieved = weightAchieved + (placeHolderWeight * placeHolderGrade);
    }
}

void calculate()
{
    finalGrade = 100 * (weightAchieved * (1 / totalWeight));
}

void reply()
{
    cout << "\n\n";
    cout << "### Calculating ###";
    cout << "\n\n\n";

    cout << "Your Final Grade is: " << finalGrade << "\n\n";
}

int main()
{
    obtain();
    calculate();
    reply();
    return 0;
}