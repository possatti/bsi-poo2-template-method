#include <cstdlib>

#include "WorkSchedule.h"
#include "CleaningOperation.h"
#include "Maintence.h"

using namespace std;

int main(int argc, char** argv)
{
    const WorkSchedule * const cleaningWork = new CleaningOperation;
    const WorkSchedule * const maintence = new Maintence;

    cleaningWork->threeHourOperation();
    maintence->threeHourOperation();

    return 0;
}

