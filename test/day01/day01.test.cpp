#include <catch2/catch.hpp>
#include "../../src/day01/Day01.h"

TEST_CASE("Day 01", "[day1]") {
    Day01 day;

    SECTION("Part 1") {
      auto result = day.processDifferences({3,4,2,1,3,3}, {4,3,5,3,9,3});
      REQUIRE(result == 11);
    }

    SECTION("Part 2") {
      auto result = day.processSimilarityScores({3,4,2,1,3,3}, {4,3,5,3,9,3});
      REQUIRE(result == 31);
    }
}
