#include <catch2/catch.hpp>
#include "../../src/day01/IdListParser.h"

TEST_CASE("Day 01 Parser", "[day1]") {
  IdListParser parser;
  const std::string testInput = "3   4\n"
                                "4   3\n"
                                "2   5\n"
                                "1   3\n"
                                "3   9\n"
                                "3   3";

  SECTION("It can read in numbers into separate lists") {
    parser.setInput("1    2");
    auto result = parser.parse();
    REQUIRE(result.listA.size() == 1);
    REQUIRE(result.listB.size() == 1);
    REQUIRE(result.listA[0] == 1);
    REQUIRE(result.listB[0] == 2);
  }

  SECTION("Test Input") {
    parser.setInput(testInput);
    auto result = parser.parse();
    REQUIRE(result.listA.size() == result.listB.size());
    REQUIRE(result.listA.size() == 6);
    REQUIRE(result.listA[0] == 3);
    REQUIRE(result.listA[1] == 4);
    REQUIRE(result.listA[2] == 2);
    REQUIRE(result.listA[3] == 1);
    REQUIRE(result.listA[4] == 3);
    REQUIRE(result.listA[5] == 3);
  }
}