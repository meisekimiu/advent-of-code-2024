#include "ReportParser.h"
#include <sstream>

std::vector<ReportInt> ReportParser::parseLine(const std::string &str) {
  std::vector<ReportInt> report;
  report.reserve(9);
  std::istringstream ss(str);
  ReportInt num;
  while (ss >> num) {
    report.push_back(num);
  }
  return report;
}