#ifndef CLEANINGOPERATION_H
#define	CLEANINGOPERATION_H

#include "WorkSchedule.h"

class CleaningOperation : public WorkSchedule
{
public:
    CleaningOperation();
    virtual ~CleaningOperation();
protected:
    virtual void startTask() const;
    virtual void hourOneTask() const;
    virtual void hourTwoTask() const;
    virtual void hourThreeTask() const;
};

#endif	/* CLEANINGOPERATION_H */

