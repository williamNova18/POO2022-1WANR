#include <iostream>
#include <iomanip>
#include <vector>
#include <typeinfo>
#include "Employee.h"
#include "Salaried.h"
#include "Hourly.h"
#include "Commission.h"
#include "BasePlus.h"
#include "Daily.h"
using namespace std;

int main() {
    cout << fixed << setprecision( 2 );
    vector< Employee *  > employees( 5 );

    employees[ 0 ] = new SalariedEmployee( "Jhon", "Smith", "111-111-1111", 800 );
    employees[ 1 ] = new HourlyEmployee( "Karen", "Price", "222-222-2222", 16.75, 40 );
    employees[ 2 ] = new Commission( "Sue", "Jones", "333-333-3333", 1000, .06 );
    employees[ 3 ] = new BasePlusCommissionEmployee( "Bob", "Lewis", "444-444-4444", .04, 300 );
    employees[ 4 ] = new DailyEmployee( "William", "Nova", "555-555-5555", 20, 10 );

    for( size_t i = 0; i < employees.size(); i++ ){
        employees[ i ]->print();
        cout << endl;
        BasePlusCommissionEmployee *derivedPtr = dynamic_cast < BasePlusCommissionEmployee * > ( employees[ i ] );
        if ( derivedPtr != 0 ){
            double oldBaseSalary = derivedPtr->getBaseSalary();
            cout << "new base salary with 10% increase is: $"
            << derivedPtr->getBaseSalary() << endl;
        }
        cout << "earned $" << employees[ i ]->earnings() << "n\n";
    }
    for( size_t j = 0; j < employees.size(); j++ ){
        cout << "deleting object of "
        << typeid( *employees[ j ]).name() << endl;
        delete employees[ j ];
    }
    return 0;
}
