#include "FileHandling.h"
#include "fileIO.h"
#include "processTrip.h"

int main(int argc, char *argv[]) {
  ProcessTrip processTrip (argc, argv);
  while (processTrip.getNumStudents()) {
    processTrip.initializeStudentSpending();
    processTrip.getStudentSpending();
    processTrip.printStudentSpending();
    processTrip.processTrip();
    processTrip.filePrintRedistributeAmount();
  }
}