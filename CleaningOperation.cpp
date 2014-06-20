#include "CleaningOperation.h"
#include <iostream>

using namespace std;

CleaningOperation::CleaningOperation()
{
}

void CleaningOperation::startTask() const
{
    cout << "Cleaning operation started." << endl;
}

void CleaningOperation::hourOneTask() const
{
    cout << "Cleaning step 1." << endl;
}

void CleaningOperation::hourTwoTask() const
{
    cout << "Cleaning step 2." << endl;
}

void CleaningOperation::hourThreeTask() const
{
    cout << "Cleaning step 3." << endl;
}

CleaningOperation::~CleaningOperation()
{
}

