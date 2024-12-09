#include "Day02.h"
#include <algorithm>
#include <numeric>
#include <iostream>

bool Day02::isReportSafe(const std::vector<ReportInt> &report) {
  std::vector<ReportInt> differences = report;
  differences.pop_back();
  std::transform(differences.begin(), differences.end(), ++report.begin(), differences.begin(), [](auto a, auto b) {
    return b - a;
  });

  bool differencesAreSafe = std::all_of(differences.begin(), differences.end(), [](auto n) {
    return std::abs(n) <= 3 && n != 0;
  });

  bool signsAreSame = std::equal(++differences.begin(), differences.end(), differences.begin(), [](auto a, auto b) {
    return a > 0 == b > 0;
  });

  return differencesAreSafe && signsAreSame;
}

bool Day02::testReportWithTolerance(const std::vector<ReportInt> &report) {
  if (isReportSafe(report)) {
    return true;
  }
  for (int i = 0; i < report.size(); i++) {
    std::vector<ReportInt> subReport = report;
    subReport.erase(subReport.begin() + i);
    if (isReportSafe(subReport)) {
      return true;
    }
  }
  return false;
}

void Day02::parseLine(const std::string &line) {
  reports.push_back(parser.parseLine(line));
}

int Day02::mainPartOne() {
  readInput("data/day02/input.txt");
  int safeReports = std::transform_reduce(reports.begin(), reports.end(), 0, std::plus<>(), [](const auto &report) {
    return Day02::isReportSafe(report);
  });
  std::cout << safeReports << std::endl;
  return EXIT_SUCCESS;
}

int Day02::mainPartTwo() {
  readInput("data/day02/input.txt");
  int safeReports = std::transform_reduce(reports.begin(), reports.end(), 0, std::plus<>(), [](const auto &report) {
    return Day02::testReportWithTolerance(report);
  });
  std::cout << safeReports << std::endl;
  return EXIT_SUCCESS;
}
