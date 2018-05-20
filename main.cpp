#include <iostream>
#include <fstream>
#include "Permanent.h"
#include "Contractor.h"
using namespace std;


std::ostream& operator<<(std::ostream &output, Employee* Eperson) {
    if (Eperson->employeeType == 'P') {
        auto * person = dynamic_cast<Permanent*> (Eperson);
        output << "\nPermanent Employee " << std::to_string(person->specific_number_in_all_same_employees) << "\n" <<
               person->get_ID() << "\nMonthly Salary - $" << person->get_monthly_salary() << "\nWork Rate - " << person->get_working_rate();
    } else if (Eperson->employeeType == 'C') {
        auto * person = dynamic_cast<Contractor*> (Eperson);
        output << "\nContractor " << std::to_string(person->specific_number_in_all_same_employees) << "\n" <<
               person->get_ID() << "\nMonthly Salary - $" << person->get_monthly_salary() << "\nWorked Days for this Month - " << person->get_working_days();
    };
    return output;
}

//struct Person {
//    string firsName;
//    string lastName;
//    char employeeType;
//    double monthlySalary;
//    double workingRate;
//    double workingDays;
//};


int main() {
    Employee * persons[11];
    ofstream report("report.txt");
    ifstream inputList;

    int number;
    char employeeType;
    double monthlySalary;

    inputList.open("/Users/hooman/CLionProjects/HMW_4/cmake-build-debug/list.txt", ifstream::in);
    if (!inputList.is_open()) {
        cout << "Can not file for reading!" << endl;
        exit(1);
    }
    char c = inputList.get();
    while (!inputList.eof()) {
        cout << c;
        c = inputList.get();
    }



//    person[1] = new Contractor



    Permanent person1, person2, person3;
    Permanent person6, person7;
    Contractor person4, person5;
    Contractor person8, person9, person10;



    person1.set_monthly_salary(6000);
    person1.set_working_rate(0.75);
    person2.set_monthly_salary(12000);
    person2.set_working_rate(0.5);
    person3.set_monthly_salary(7000);
    person3.set_working_rate(0.25);

    person4.set_monthly_salary(6000);
    person4.set_working_days(22);
    person5.set_monthly_salary(5500);
    person5.set_working_days(28);

    person6.set_monthly_salary(75000);
    person6.set_working_rate(0.75);
    person7.set_monthly_salary(5000);
    person7.set_working_rate(1);

    person8.set_monthly_salary(12000);
    person8.set_working_days(17);
    person9.set_monthly_salary(5500);
    person9.set_working_days(26);
    person10.set_monthly_salary(6000);
    person10.set_working_days(20);

    persons[0] = &person1;
    persons[1] = &person2;
    persons[2] = &person3;
    persons[3] = &person4;
    persons[4] = &person5;
    persons[5] = &person6;
    persons[6] = &person7;
    persons[7] = &person8;
    persons[8] = &person9;
    persons[9] = &person10;

    report << "\nThis is a report of all personnel's information:" << endl << endl;
    report << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *" << endl << endl;

    for (Employee* person : persons) {
        report << person;
        report << "\nAmount of salary for the current month: $" << person->calculate_salary_for_current_month() << endl << endl;
//        cout << person;
//        cout << "\nAmount of salary for the current month: $" << person->calculate_salary_for_current_month() << endl << endl;
    }

    return 0;
}