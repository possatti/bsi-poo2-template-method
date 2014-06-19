#ifndef MAINTENCE_H
#define	MAINTENCE_H

#include "WorkSchedule.h"

class Maintence : public WorkSchedule
{
public:
    Maintence();
    virtual ~Maintence();
protected:
    virtual void startTask();
    virtual void hourOneTask();
    virtual void hourTwoTask();
    virtual void hourThreeTask();
};

#endif	/* MAINTENCE_H */

