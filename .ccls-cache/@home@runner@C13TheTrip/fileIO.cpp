#include "fileIO.h"
#include <iomanip>

bool FileIO::getNumStudents (void) {
  inFile >> numStudents;
  if (numStudents == 0) 
    return false;
  else 
    return true;
}
void FileIO::initializeStudentSpending(void) {
  for (int i = 0; i < numStudents; i++) {
    studentSpending[i] = 0;
  }
}
void FileIO::getStudentSpending(void) {
  for (int i = 0; i < numStudents; i++) {
    inFile >> studentSpending[i];
  }
}
void FileIO::printStudentSpending(void) {
  for (int i = 0; i < numStudents; i++) {
    std::cout << "$" << std::setw(5) << std::setprecision(2) << std::setfill('0') << std::fixed << studentSpending[i] << std::endl;
  }
}
void FileIO::filePrintStudentSpending(void) {
  for (int i = 0; i < numStudents; i++) {
    outFile << "$" << std::setw(5) << std::setprecision(2) << std::setfill('0') << std::fixed << studentSpending[i] << std::endl;
  }
}
void FileIO::printRedistributeAmount(void) {
  std::cout << "$" << std::setw(5) << std::setprecision(2) << std::setfill('0') << std::fixed << redistributeAmount << std::endl;
}
void FileIO::filePrintRedistributeAmount(void) {
  outFile << "$" << std::setw(5) << std::setprecision(2) << std::setfill('0') << std::fixed << redistributeAmount << std::endl;
}