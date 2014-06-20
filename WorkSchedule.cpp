#include "WorkSchedule.h"

WorkSchedule::WorkSchedule()
{
}

void WorkSchedule::threeHourOperation() const
{
    startTask();
    hourOneTask();
    hourTwoTask();
    hourThreeTask();
}

WorkSchedule::~WorkSchedule()
{
}

