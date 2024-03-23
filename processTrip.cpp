#include "processTrip.h"

void ProcessTrip::processTrip(void) {
  double total = 0;
  for (int i = 0; i < numStudents; i++) {
    total += studentSpending[i];
  } 
  double average = total / numStudents;

  redistributeAmount = 0;
  for (int i = 0; i < numStudents; i++) {
    if (studentSpending[i] > average) {
      redistributeAmount += (studentSpending[i] - average);
    }
  }
}