#ifndef CLEANINGOPERATION_H
#define	CLEANINGOPERATION_H

#include "WorkSchedule.h"

class CleaningOperation : public WorkSchedule
{
public:
    CleaningOperation();
    virtual ~CleaningOperation();
protected:
    virtual void startTask();
    virtual void hourOneTask();
    virtual void hourTwoTask();
    virtual void hourThreeTask();
};

#endif	/* CLEANINGOPERATION_H */

