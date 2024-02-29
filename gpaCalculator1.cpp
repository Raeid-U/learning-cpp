#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

int numCourses;
float gradesTotal;
float gpaTotal;
float placeHolderGrade;
float placeHolderGPA;
float averageGrade;
float averageGPA;

void obtain_FinalGPACalc() // obtains courses and grades from user
{
    cout << "\n-----\n";
    cout << "\nHow many courses did you take?\n";
    cin >> numCourses; // prompts # of courses taken

    cout << "\nPlease input the grades for each course\n";
    for (int i = 1; i <= numCourses; i++) // records the grade for each course
    {
        cout << "Course " << i << ": ";
        cin >> placeHolderGrade;

        if (placeHolderGrade < 0 || placeHolderGrade > 100) // ensures grade entered exists
        {
            cout << "Error, Invalid Grade\n";
            cout << "Please re-input --- Course " << i << ": ";
            cin >> placeHolderGrade;
        }

        if (placeHolderGrade >= 93 && placeHolderGrade <= 100) // assigns a GPA to the grade provided
        {
            placeHolderGPA = 4.0;
        }
        else if (placeHolderGrade >= 90 && placeHolderGrade <= 92)
        {
            placeHolderGPA = 3.7;
        }
        else if (placeHolderGrade >= 87 && placeHolderGrade <= 89)
        {
            placeHolderGPA = 3.3;
        }
        else if (placeHolderGrade >= 83 && placeHolderGrade <= 86)
        {
            placeHolderGPA = 3.0;
        }
        else if (placeHolderGrade >= 80 && placeHolderGrade <= 82)
        {
            placeHolderGPA = 2.7;
        }
        else if (placeHolderGrade >= 77 && placeHolderGrade <= 79)
        {
            placeHolderGPA = 2.3;
        }
        else if (placeHolderGrade >= 73 && placeHolderGrade <= 76)
        {
            placeHolderGPA = 2.0;
        }
        else if (placeHolderGrade >= 70 && placeHolderGrade <= 72)
        {
            placeHolderGPA = 1.7;
        }
        else if (placeHolderGrade >= 67 && placeHolderGrade <= 69)
        {
            placeHolderGPA = 1.3;
        }
        else if (placeHolderGrade >= 65 && placeHolderGrade <= 66)
        {
            placeHolderGPA = 1.0;
        }
        else if (placeHolderGrade < 65)
        {
            placeHolderGPA = 0;
        }

        gradesTotal = gradesTotal + placeHolderGrade; // dump placeholder
        gpaTotal = gpaTotal + placeHolderGPA;         // dump placeholder
    }
}

void calculate_FinalGPACalc() // calculates averages
{
    averageGrade = gradesTotal / numCourses;
    averageGPA = gpaTotal / numCourses;
}

void reply_FinalGPACalc() // returns averages to user
{
    cout << "\nYour average for this semester was: " << averageGrade << "\n";
    cout << "Your unweighted GPA is: " << averageGPA << "\n";
    cout << "\n";
}

int main()
{
    char reRun;
    do // allows user to rerun
    {
        obtain_FinalGPACalc();
        calculate_FinalGPACalc();
        reply_FinalGPACalc();
        cout << "Would you like to run again? (y/n):";
        cin >> reRun;
        cout << "\n-----\n";
    } while (reRun == 'y');
    return 0;
}