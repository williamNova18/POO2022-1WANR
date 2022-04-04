//
// Created by willi on 3/04/2022.
//

#ifndef POO_HOY_COMMISSION_H
#define POO_HOY_COMMISSION_H

#include "Employee.h"

class Commission : public Employee{
    public:
        Commission( const string &, const string &, const string &, double = 0.0, double = 0.0 );
        void setCommissionRate( double );
        double getCommissionRate() const;
        void setGrossSales( double );
        double getGrossSales() const;
        virtual double earnings() const;
        virtual void print() const;
    private:
        double grossSales;
        double commissionRate;
};


#endif //POO_HOY_COMMISSION_H
