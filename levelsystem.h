#pragma once 

class LevelSystem {
  public:
    LevelSystem () { 
      CurrentLevel = 1u;
      CurrentExp = 0u
    }

    void gainExp( std::uint64_t gained_exp) {
      CurrentExp += gained_exp;
    }

  protected:
    std::uint16_t CurrentLevel;
    std::uint16_t LevelUpsAvailable; 
    std::uint64_t CurentExp; 
};