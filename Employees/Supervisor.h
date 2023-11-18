/**
 * @file Supervisor.h
 * @author Braden Windsor
 * @date 2023-11-17
 * @brief .h file
 * 
 * Contains function declarations
 */

#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Employee.h"

class Supervisor : public Employee {
 private:
  int numSupervised; //number of employees supervised
 public:
  void print(); //print function
  double calculatePay(); //calculates pay
  Supervisor(); // default constructor
  Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised); //constructor
};

#endif //SUPERVISOR_H
