/**
 * @file Officer.h
 * @author Braden Windsor
 * @date 2023-11-17
 * @brief .h file
 * 
 * Contains function declarations
 */

#ifndef OFFICER_H
#define OFFICER_H

#include "Employee.h"

class Officer : public Employee {
 private:
  double evilness; //Employee Evil level
 public:
  void print(); //Print function
  double calculatePay(); //calculates pay
  Officer(); //default constructor
  Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness); //constructor
};

#endif //OFFICER_H
