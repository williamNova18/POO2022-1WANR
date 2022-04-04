//
// Created by willi on 3/04/2022.
//

#ifndef POO_HOY_BASEPLUS_H
#define POO_HOY_BASEPLUS_H

#include "Commission.h"

class BasePlusCommissionEmployee : public Commission {
    public:
        BasePlusCommissionEmployee( const string &, const string &, const string &, double = 0.0, double = 0.0, double = 0.0 );
        void setBaseSalary( double );
        double getBaseSalary() const;
        virtual double earnings() const;
        virtual void print() const;
    private:
        double baseSalary;
};


#endif //POO_HOY_BASEPLUS_H
