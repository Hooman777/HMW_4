//
// Created by Seyedhooman Hesamyan on 5/16/18.
//

#ifndef HMW_4_PERMANENT_H
#define HMW_4_PERMANENT_H


#include "Employee.h"

class Permanent : public Employee{
private:
    static unsigned int counter;
    double working_rate;
    unsigned int numberGenerator() override;

public:
    Permanent();
    void set_working_rate(double);
    double get_working_rate();
    double calculate_salary_for_current_month() override;

};


#endif //HMW_4_PERMANENT_H
