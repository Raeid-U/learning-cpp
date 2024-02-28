#include <iostream>
#include <string>
#include <typeinfo>
#include <cstdlib>
using namespace std;

int userChoice;
float placeholder;
float termTotal = 70;
float termAchieved;
float summativeTotal;
float summativeAchieved;
float examTotal;
float examAchieved;

float totalWeight;
float weightAchieved;
float preExamGrade;

double addition = 0;
float requiredGrade;

// Abandoned Project -- INCOMEPLETE

void choose1()
{
    cout << "\nExam Calculator Launched\n";
    cout << "\n\nWhich permutation applies to you?\n";

    cout << "[1] Term Marks 70%, Summative Assignment 10%, Exam 20%\n";
    cout << "[2] Term Marks 70%, Summative Assignment 20%, Exam 10%\n";
    cout << "[3] Term Marks 70%, Exam 30%\n\n";

    cin >> userChoice;
}

void calcReply()
{
}

int main()
{
    choose1();
    if (userChoice == 1)
    {
        summativeTotal = 10;
        examTotal = 20;
        cout << "\nWhat is your Current Mark Percentage (Term Work): ";
        cin >> termAchieved;

        cout << "What have you gotten on the summative (Percentage): ";
        cin >> summativeAchieved;

        cout << "What do you want in the Course? ";
        cin >> placeholder;

        totalWeight = termTotal + summativeTotal + examTotal;
        weightAchieved = weightAchieved + (termAchieved * termTotal / 100) + (summativeAchieved * summativeTotal / 100);

        preExamGrade = (weightAchieved / totalWeight);
        cout << preExamGrade;

        cout << "\n\nYou need a " << requiredGrade << " Percent on the Exam\n";
    }
    else if (userChoice == 2)
    {
    }
    else if (userChoice == 3)
    {
    }
    else
    {
        cout << "\n INVALID INPUT --- INPUT CHOICE AGAIN\n";
        cin >> userChoice;
    }
}