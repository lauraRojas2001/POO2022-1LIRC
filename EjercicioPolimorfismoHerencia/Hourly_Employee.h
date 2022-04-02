#ifndef HOURLY_H
#define HOURLY_H

#include "Employee.h"

class Hourly_Employee : public Employee{
public:
    static const int hoursPerWeek = 168;

    Hourly_Employee(const string &, const string &, const string &, double = 0.0, double = 0.0);

    void setWage(double);
    double getWage() const;

    void setHours(double);
    double getHours() const;

    virtual double earnings() const;
    virtual void print() const;

private:
    double wage;
    double hours;
};


#endif
