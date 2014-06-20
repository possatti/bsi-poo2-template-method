#include "Maintence.h"
#include <iostream>

using namespace std;

Maintence::Maintence()
{
}

void Maintence::startTask() const
{
    cout << "Maintence task started." << endl;
}

void Maintence::hourOneTask() const
{
    cout << "Maintence step 1." << endl;
}

void Maintence::hourTwoTask() const
{
    cout << "Maintence step 2." << endl;
}

void Maintence::hourThreeTask() const
{
    cout << "Maintence step 3." << endl;
}

Maintence::~Maintence()
{
}

