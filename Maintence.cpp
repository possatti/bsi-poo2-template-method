#include "Maintence.h"
#include <iostream>

using namespace std;

Maintence::Maintence()
{
}

void Maintence::startTask()
{
    cout << "Maintence task started." << endl;
}

void Maintence::hourOneTask()
{
    cout << "Maintence step 1." << endl;
}

void Maintence::hourTwoTask()
{
    cout << "Maintence step 2." << endl;
}

void Maintence::hourThreeTask()
{
    cout << "Maintence step 3." << endl;
}

Maintence::~Maintence()
{
}

