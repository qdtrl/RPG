#pragma once
#include "hp.h"

class Warrior : public hp {
  public:
    static const hptype HPGROWTH = 19u;
    Warrior() : hp(HPGROWTH, HPGROWTH) {}
  private:
}