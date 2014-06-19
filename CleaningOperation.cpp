#include "CleaningOperation.h"
#include <iostream>

using namespace std;

CleaningOperation::CleaningOperation()
{
}

void CleaningOperation::startTask()
{
    cout << "Cleaning operation started." << endl;
}

void CleaningOperation::hourOneTask()
{
    cout << "Cleaning step 1." << endl;
}

void CleaningOperation::hourTwoTask()
{
    cout << "Cleaning step 2." << endl;
}

void CleaningOperation::hourThreeTask()
{
    cout << "Cleaning step 3." << endl;
}

CleaningOperation::~CleaningOperation()
{
}

