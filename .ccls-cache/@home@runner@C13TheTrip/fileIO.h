#ifndef FILE_IO_H
#define FILE_IO_H

#include "FileHandling.h"

class FileIO : public FileHandler {

protected:
  static const int MAX_NUM_STUDENTS = 1000;
  double studentSpending [MAX_NUM_STUDENTS];
  int numStudents;
  double redistributeAmount = 0;

public:
  FileIO(int argc, char **argv) : FileHandler(argc, argv) {};
  ~FileIO() {};

  bool getNumStudents(void);
  void initializeStudentSpending(void);
  void getStudentSpending(void);
  void printStudentSpending(void);
  void filePrintStudentSpending(void);
  void printRedistributeAmount(void);
  void filePrintRedistributeAmount(void);
};


#endif