#ifndef MAINTENCE_H
#define	MAINTENCE_H

#include "WorkSchedule.h"

class Maintence : public WorkSchedule
{
public:
    Maintence();
    virtual ~Maintence();
protected:
    virtual void startTask() const;
    virtual void hourOneTask() const;
    virtual void hourTwoTask() const;
    virtual void hourThreeTask() const;
};

#endif	/* MAINTENCE_H */

