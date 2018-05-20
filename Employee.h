//
// Created by Seyedhooman Hesamyan on 5/16/18.
//

#ifndef HMW_4_EMPLOYEE_H
#define HMW_4_EMPLOYEE_H

#include <iostream>
#include <string>
//#include "Permanent.h"
//#include "Contractor.h"

class Employee {
private:
    static unsigned int initialId;
    std::string ID;
    double monthly_salary;

protected:
    std::string IdGenerator();
    char employeeType;
    unsigned int specific_number_in_all_same_employees;
    virtual unsigned int numberGenerator() = 0;


public:
    Employee();
    std::string get_ID();
    void set_monthly_salary(double);
    double get_monthly_salary();
    virtual double calculate_salary_for_current_month() = 0;
    friend std::ostream &operator<<(std::ostream &output, Employee *employee);

};


#endif //HMW_4_EMPLOYEE_H
