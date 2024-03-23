#include "FileHandling.h"
#include <string.h>

FileHandler::FileHandler(int argc, char *argv[]) {
  if (argc < 2) {
    std::cout << "Usage: " << argv[0] << " <filename>" << std::endl;
  }

  char filename[81];
  strcpy (filename, argv[1]);
  strcat (filename, ".out");

  inFile.open(argv[1]);
  outFile.open(filename);

  if (!inFile.is_open()) {
    std::cout << "Error opening file <" << argv[1] << ">" << std::endl;
  }
  else {
    std::cout << "File <" << argv[1] << "> opened successfully" << std::endl;
  }
  if (!outFile.is_open()) {
    std::cout << "Error opening file <" << filename << ">" << std::endl;
  }
  else {
    std::cout << "File <" << filename << "> opened successfully" << std::endl;
  }
}
FileHandler::~FileHandler() {
  inFile.close();
  outFile.close();
}