/**
 * @file Officer.cpp
 * @author Braden Windsor
 * @date 2023-11-17
 * @brief .cpp file
 * 
 * Contains function meat for officer.h
 */

#include "Officer.h"
#include <iostream>

using namespace std;

Officer::Officer() {
  evilness = 500;
}

Officer::Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness) : Employee(ID, years, hourlyRate, hoursWorked) {
  this->evilness = evilness;
}

void Officer::print() {
  Employee::print();
  cout << " Evilness: " << evilness << endl;
}

double Officer::calculatePay() {
  return (hourlyRate + evilness) * hoursWorked;
}
