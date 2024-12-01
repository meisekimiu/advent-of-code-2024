#ifndef ADVENT_OF_CODE_DAY01_H
#define ADVENT_OF_CODE_DAY01_H
#include "../include/AdventDay.h"
#include "IdListParser.h"

class Day01 : public AdventDay {
public:
  int mainPartOne() override;
  int mainPartTwo() override;
  int processDifferences(std::vector<MapId> listA, std::vector<MapId> listB);
  int processSimilarityScores(std::vector<MapId> listA, std::vector<MapId> listB);
  void parseLine(const std::string &line) override;

private:
  std::string input;
};


#endif //ADVENT_OF_CODE_DAY01_H
