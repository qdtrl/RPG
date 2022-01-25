#pragma once
#include "stattypes.h"
struct StatBlock {
  stattype Strength;
  stattype Intellect;
  StatBlock() {
    Strength = (stattype)1u;
    Intellect = (stattype)1u; 
  }
  StatBlock(stattype s, stattype i) { 
    Strength = s; 
    Intellect = i; 
  }
};