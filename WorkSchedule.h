#ifndef WORKSCHEDULE_H
#define	WORKSCHEDULE_H

class WorkSchedule
{
public:
    WorkSchedule();
    void threeHourOperation() const;
    virtual ~WorkSchedule();
protected:
    virtual void startTask() const = 0;
    virtual void hourOneTask() const = 0;
    virtual void hourTwoTask() const = 0;
    virtual void hourThreeTask() const = 0;
};

#endif	/* WORKSCHEDULE_H */

