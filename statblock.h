#pragma once
#include "stattypes.h"

struct StatBlock {
  private:
    stattype Strength;
    stattype Intellect;
  public:
    StatBlock() {
      Strength = (stattype)1u;
      Intellect = (stattype)1u;
    }
    explicit StatBlock(stattype s, stattype i) {
      Strength = s;
      Intellect = i;
    }
    stattype getStrength() { return Strength; }
    stattype getIntellect() { return Intellect; }
 
};