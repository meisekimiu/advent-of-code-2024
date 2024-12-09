#include <catch2/catch.hpp>
#include "../../src/day02/Day02.h"

TEST_CASE("Day 02", "[day2]") {
  Day02 day;
  SECTION("Part 1") {
    REQUIRE(day.isReportSafe({7, 6, 4, 2, 1}));
    REQUIRE_FALSE(day.isReportSafe({1, 2, 7, 8, 9}));
    REQUIRE_FALSE(day.isReportSafe({1, 3, 2, 4, 5}));
    REQUIRE_FALSE(day.isReportSafe({8, 6, 4, 4, 1}));
    REQUIRE(day.isReportSafe({1, 3, 6, 7, 9}));
  }
  SECTION("Part 2") {
    REQUIRE(day.testReportWithTolerance({7, 6, 4, 2, 1}));
    REQUIRE_FALSE(day.testReportWithTolerance({1, 2, 7, 8, 9}));
    bool safe = day.testReportWithTolerance({1, 3, 2, 4, 5});
    REQUIRE(safe);
    REQUIRE(day.testReportWithTolerance({8, 6, 4, 4, 1}));
    REQUIRE(day.testReportWithTolerance({1, 3, 6, 7, 9}));
  }
}