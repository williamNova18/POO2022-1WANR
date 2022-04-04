//
// Created by willi on 3/04/2022.
//

#ifndef POO_HOY_DAILY_H
#define POO_HOY_DAILY_H

#include "Employee.h"

class DailyEmployee: public Employee{
    public:
        DailyEmployee( const string &, const string &, const string &, double = 0.0, double = 0.0 );
        void setDailyWage( double );
        double getDailyWage() const;
        void setWorkedDays( double );
        double getWorkedDays() const;
        virtual double earnings() const;
        virtual void print() const;
    private:
        double wage;
        double workedDays;
};


#endif
