//
// Created by Seyedhooman Hesamyan on 5/16/18.
//

#ifndef HMW_4_CONTRACTOR_H
#define HMW_4_CONTRACTOR_H


#include "Employee.h"

class Contractor : public Employee{
private:
    static unsigned int counter;
    unsigned int numberGenerator() override;
    unsigned int working_days;
public:
    Contractor();
    void set_working_days(unsigned int);
    unsigned int get_working_days();
    double calculate_salary_for_current_month() override;

};


#endif //HMW_4_CONTRACTOR_H
