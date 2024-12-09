#ifndef ADVENT_OF_CODE_DAY02_H
#define ADVENT_OF_CODE_DAY02_H
#include "../include/AdventDay.h"
#include "ReportParser.h"

class Day02 : public AdventDay {
public:
  void parseLine(const std::string &line) override;
  int mainPartOne() override;
  int mainPartTwo() override;
  static bool isReportSafe(const std::vector<ReportInt> &report);
  static bool testReportWithTolerance(const std::vector<ReportInt> &report);


private:
  std::vector<std::vector<ReportInt>> reports;
  ReportParser parser;
};

#endif // ADVENT_OF_CODE_DAY02_H
