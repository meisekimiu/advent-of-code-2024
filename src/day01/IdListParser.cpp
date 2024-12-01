#include "IdListParser.h"
#include <sstream>

void IdListParser::setInput(const std::string &str) {
  input = str;
}

ParseResults IdListParser::parse() {
  ParseResults r;
  std::istringstream ss(input);
  MapId num;
  int iteration = 0;
  while (ss >> num) {
    // Cursed l-value moment?
    (iteration++ % 2 == 0 ? r.listA : r.listB).push_back(num);
  }
  return r;
}
