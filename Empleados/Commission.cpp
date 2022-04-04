//
// Created by willi on 3/04/2022.
//

#include <iostream>
#include "Commission.h"
using namespace std;

Commission::Commission( const string &first, const string &last, const string &ssn, double sales, double rate )
:Employee( first, last, ssn ){
    setGrossSales( sales );
    setCommissionRate( rate );
}

void Commission::setCommissionRate( double rate ){
    commissionRate = ( ( rate > 0.0 && rate < 1.0 ) ? rate : 0.0 );
}

double Commission::getCommissionRate() const {
    return commissionRate;
}

void Commission::setGrossSales( double sales ){
    grossSales = ( ( sales < 0.0 ) ? 0.0 : sales );
}

double Commission::getGrossSales() const {
    return  grossSales;
}

double Commission::earnings() const {
    return getCommissionRate() * getGrossSales();
}

void Commission::print() const {
    cout << "commission employee: ";
    Employee::print();
    cout << "\ngross sales: " << getGrossSales() << "; commission rate: " << getCommissionRate();
}