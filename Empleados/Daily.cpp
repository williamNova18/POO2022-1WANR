//
// Created by willi on 3/04/2022.
//

#include <iostream>
#include "Daily.h"
using namespace std;

DailyEmployee::DailyEmployee( const string &first, const string &last, const string &ssn, double dailyWage, double dailyWorked )
: Employee( first, last, ssn ){
    setDailyWage( dailyWage );
    setWorkedDays( dailyWorked );
}

void DailyEmployee::setDailyWage( double dailyWage ){
    wage = ( dailyWage < 0.0 ? 0.0 : dailyWage );
}

double DailyEmployee::getDailyWage() const {
    return wage;
}

void DailyEmployee::setWorkedDays( double hoursWorked ){
    workedDays = ( hoursWorked < 0.0 ? 0.0 : hoursWorked );
}

double  DailyEmployee::getWorkedDays() const {
    return  workedDays;
}

double DailyEmployee::earnings() const {
    if( getWorkedDays() > 0 )
        return getDailyWage() * getWorkedDays();
    else
        exit(0);
}

void DailyEmployee::print() const {
    cout << "daily employee: ";
    Employee::print();
    cout << "\nSalary: " << getDailyWage() << "; days worked: " << getWorkedDays();
}