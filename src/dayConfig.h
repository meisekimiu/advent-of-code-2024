#ifndef ADVENT_OF_CODE_DAYCONFIG_H
#define ADVENT_OF_CODE_DAYCONFIG_H
#include "AdventFactory.h"
#include "day01/Day01.h"
#include "day02/Day02.h"


AdventFactory getAdventFactory() {
    AdventFactory f;
    f.registerDay("day01", []() {return static_cast<AdventDay*>(new Day01());});
    f.registerDay("day02", []() {return static_cast<AdventDay*>(new Day02());});

    return f;
}

#endif //ADVENT_OF_CODE_DAYCONFIG_H
