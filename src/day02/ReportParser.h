#ifndef ADVENT_OF_CODE_REPORTPARSER_H
#define ADVENT_OF_CODE_REPORTPARSER_H
#include <vector>
#include <string>

typedef int ReportInt;

class ReportParser {
public:
  std::vector<ReportInt> parseLine(const std::string& str);
};

#endif // ADVENT_OF_CODE_REPORTPARSER_H
