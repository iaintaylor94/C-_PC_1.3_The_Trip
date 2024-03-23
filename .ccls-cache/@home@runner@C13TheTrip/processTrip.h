#ifndef PROCESS_TRIP_H
#define PROCESS_TRIP_H

#include "fileIO.h"

class ProcessTrip : public FileIO {

public:
  ProcessTrip(int argc, char **argv) : FileIO(argc, argv) {};
  ~ProcessTrip() {};

  void processTrip(void);
};


#endif