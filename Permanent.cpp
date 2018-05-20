//
// Created by Seyedhooman Hesamyan on 5/16/18.
//

#include "Permanent.h"

unsigned int Permanent::counter = 1;

Permanent::Permanent() : Employee() {
    employeeType = 'P';
    specific_number_in_all_same_employees = numberGenerator();

}

void Permanent::set_working_rate(double rate) {
    working_rate = rate;
}

double Permanent::get_working_rate() {
    return working_rate;
}

double Permanent::calculate_salary_for_current_month() {
    return get_monthly_salary() * get_working_rate();
}

unsigned int Permanent::numberGenerator() {
    return counter++;
}




