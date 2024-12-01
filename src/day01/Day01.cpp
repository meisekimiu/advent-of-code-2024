#include "Day01.h"
#include <algorithm>
#include <numeric>
#include <iostream>

int Day01::mainPartOne() {
  readInput("data/day01/input.txt");
  IdListParser parser;
  parser.setInput(input);
  auto results = parser.parse();
  std::cout << processDifferences(results.listA, results.listB) << std::endl;
  return EXIT_SUCCESS;
}

int Day01::mainPartTwo() {
  readInput("data/day01/input.txt");
  IdListParser parser;
  parser.setInput(input);
  auto results = parser.parse();
  std::cout << processSimilarityScores(results.listA, results.listB) << std::endl;
  return EXIT_SUCCESS;
}

void Day01::parseLine(const std::string &line) { input += line + "\n"; }

int Day01::processDifferences(std::vector<MapId> listA,
                                       std::vector<MapId> listB) {
  std::sort(listA.begin(), listA.end());
  std::sort(listB.begin(), listB.end());
  return std::transform_reduce(listA.begin(), listA.end(), listB.begin(), 0, std::plus<>(), [](auto a, auto b) {
    return std::abs(a - b);
  });
}

int Day01::processSimilarityScores(std::vector<MapId> listA,
                                   std::vector<MapId> listB) {
  std::sort(listB.begin(), listB.end());
  return std::transform_reduce(listA.begin(), listA.end(), 0, std::plus<>(), [listB](auto n) {
    return n * std::count(listB.begin(), listB.end(), n);
  });
}
