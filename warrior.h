#pragma once
#include "hp.h"
#include"statblock.h"

class Warrior : public hp, public {
  public:
    static const hptype HPGROWTH = (hptype)19u;
    static const stattype BASESTR =  (stattype)10u;
    Warrior() : hp(HPGROWTH, HPGROWTH) : {}
  private:
}