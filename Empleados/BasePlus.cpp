//
// Created by willi on 3/04/2022.
//

#include <iostream>
#include "BasePlus.h"
using namespace std;

BasePlusCommissionEmployee::BasePlusCommissionEmployee( const string &first, const string &last, const string &ssn, double sales, double rate,
                                                       double salary ): Commission( first, last, ssn, sales, rate ){
    setBaseSalary( salary );
}

void BasePlusCommissionEmployee::setBaseSalary( double salary ){
    baseSalary = ( ( salary < 0.0 ) ? 0.0 : salary );
}

double BasePlusCommissionEmployee::getBaseSalary() const {
    return baseSalary;
}

double BasePlusCommissionEmployee::earnings() const {
    return getBaseSalary() + Commission::earnings();
}

void BasePlusCommissionEmployee::print() const {
    cout << "base-salaried ";
    Commission::print();
    cout << "base salary: " << getBaseSalary();
}