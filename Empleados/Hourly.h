//
// Created by willi on 3/04/2022.
//

#ifndef POO_HOY_HOURLY_H
#define POO_HOY_HOURLY_H

#include "Employee.h"

class HourlyEmployee: public Employee{
    public:
        static const int hoursPerWeek = 168;
        HourlyEmployee( const string &, const string &, const string &, double = 0.0, double = 0.0 );
        void setWage( double );
        double getWage() const;
        void setHours( double );
        double getHours() const;
        virtual double earnings() const;
        virtual void print() const;
    private:
        double wage;
        double hours;
};


#endif //POO_HOY_HOURLY_H
