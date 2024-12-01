#ifndef ADVENT_OF_CODE_IDLISTPARSER_H
#define ADVENT_OF_CODE_IDLISTPARSER_H
#include <string>
#include <vector>

typedef int MapId;

struct ParseResults {
  std::vector<MapId> listA;
  std::vector<MapId> listB;
};

class IdListParser {
public:
  void setInput(const std::string &str);
  ParseResults parse();

private:
  std::string input;
};

#endif // ADVENT_OF_CODE_IDLISTPARSER_H
