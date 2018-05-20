//
// Created by Seyedhooman Hesamyan on 5/16/18.
//

#include "Employee.h"

unsigned int Employee::initialId = 10;

Employee::Employee() {
    ID = IdGenerator();
}

std::string Employee::IdGenerator() {
    std::string output;
    output = "ID - " + std::to_string(initialId);
    initialId += 10;
    return output;
}

std::string Employee::get_ID() {
    return ID;
}

void Employee::set_monthly_salary(double mSalary) {
    monthly_salary = mSalary;
}

double Employee::get_monthly_salary() {
    return monthly_salary;
}

