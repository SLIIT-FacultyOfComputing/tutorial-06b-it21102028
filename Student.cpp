#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

// Assign studentId and name
Student::assignDetails(int sID, const char n[20])
{
  studentId = sID;
  strcpy(name, n);
}

// Display StudentId and Name
void tudent::display() {
cout << "Student ID : " << studentId << endl;
cout << "Student name : " << name << endl;
  
}
