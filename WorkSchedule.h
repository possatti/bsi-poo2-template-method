#ifndef WORKSCHEDULE_H
#define	WORKSCHEDULE_H

class WorkSchedule
{
public:
    WorkSchedule();
    void threeHourOperation();
    virtual ~WorkSchedule();
protected:
    virtual void startTask() = 0;
    virtual void hourOneTask() = 0;
    virtual void hourTwoTask() = 0;
    virtual void hourThreeTask() = 0;
};

#endif	/* WORKSCHEDULE_H */

