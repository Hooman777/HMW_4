//
// Created by Seyedhooman Hesamyan on 5/16/18.
//

#include "Contractor.h"

unsigned int Contractor::counter = 1;

Contractor::Contractor() : Employee() {
    employeeType = 'C';
    specific_number_in_all_same_employees = numberGenerator();

}

void Contractor::set_working_days(unsigned int days) {
    working_days = days;
}

unsigned int Contractor::get_working_days() {
    return working_days;
}

double Contractor::calculate_salary_for_current_month() {
    return get_monthly_salary() * get_working_days() / 30;
}
unsigned int Contractor::numberGenerator() {
    return counter++;
}
