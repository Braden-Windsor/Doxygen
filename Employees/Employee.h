/**
 * @file Employee.h
 * @author Braden Windsor
 * @date 2023-11-17
 * @brief .h file
 * 
 * Contains function declarations
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee {
 private:
  int ID; //employee ID
  int years; //Employee years
  
 protected:
  double hourlyRate; //Employee Rate
  float hoursWorked; //Employee hours
 public:
  virtual void print(); //Print function
  virtual double calculatePay(); //Calculates pay for employee
  void anniversary(); //Gives a yearly employee a pitiful raise
  Employee(); // default constructor
  Employee(int ID, int years, double hourlyRate, float hoursWorked); //constructro
};

#endif //EMPLOYEE_H
