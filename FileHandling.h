#ifndef FILE_HANDLING_H
#define FILE_HANDLING_H

#include <fstream>
#include <iostream>

class FileHandler {
private:

protected:
  std::ifstream inFile;
  std::ofstream outFile;

public:
  FileHandler(int, char **);
  ~FileHandler();

};
#endif