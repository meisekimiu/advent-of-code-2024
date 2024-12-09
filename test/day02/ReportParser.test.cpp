#include <catch2/catch.hpp>
#include "../../src/day02/ReportParser.h"

TEST_CASE("Day 02 Parser", "[day2]") {
  ReportParser parser;

  SECTION("It can read in a list of numbers") {
    std::vector<ReportInt> vec = parser.parseLine("1 2 3 4 5");
    REQUIRE(vec.size() == 5);
    REQUIRE(vec[0] == 1);
    REQUIRE(vec[1] == 2);
    REQUIRE(vec[2] == 3);
    REQUIRE(vec[3] == 4);
    REQUIRE(vec[4] == 5);
  }
}