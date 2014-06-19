#include "WorkSchedule.h"

WorkSchedule::WorkSchedule()
{
}

void WorkSchedule::threeHourOperation()
{
    startTask();
    hourOneTask();
    hourTwoTask();
    hourThreeTask();
}

WorkSchedule::~WorkSchedule()
{
}

