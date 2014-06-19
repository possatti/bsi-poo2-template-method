#include <cstdlib>

#include "WorkSchedule.h"
#include "CleaningOperation.h"
#include "Maintence.h"

using namespace std;

int main(int argc, char** argv)
{
    WorkSchedule* cleaningWork = new CleaningOperation;
    WorkSchedule* maintence = new Maintence;

    cleaningWork->threeHourOperation();
    maintence->threeHourOperation();

    return 0;
}

