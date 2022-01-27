#include <iostream>
#include "allclasses.h"

int main() {
  Warrior war1;
  Wizard waz1;
  Cleric cle1;
  Rogue rog1;

  std::cout << "Warrior\n" 
  << "- MaxHP: " << war1.getMaxHp() 
  << "\n- Strength: " << war1.getStrength()
  << "\n- Intellect: " << war1.getIntellect() << '\n';

  std::cout << "Warrior\n" 
  << "- MaxHP: " << waz1.getMaxHp() 
  << "\n- Strength: " << waz1.getStrength()
  << "\n- Intellect: " << waz1.getIntellect() << '\n';

  std::cout << "Warrior\n" 
  << "- MaxHP: " << cle1.getMaxHp() 
  << "\n- Strength: " << cle1.getStrength()
  << "\n- Intellect: " << cle1.getIntellect() << '\n';

  std::cout << "Warrior\n" 
  << "- MaxHP: " << rog1.getMaxHp() 
  << "\n- Strength: " << rog1.getStrength()
  << "\n- Intellect: " << rog1.getIntellect() << '\n';
  return 0;
}