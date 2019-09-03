#include "fighter.h"
#include <iostream>
#include <string>

std::string declareWinner(Fighter* fighter1, Fighter* fighter2, std::string firstAttacker);


int main()
{
  Fighter fighter1("Harald", 20, 5);
  Fighter fighter2("Harry", 5, 4);

  std::string winner = declareWinner(&fighter1, &fighter2, "Harry");
  std::cout << "Winner is: " << winner;
}

std::string declareWinner(Fighter* fighter1, Fighter* fighter2, std::string firstAttacker)
{

  while(fighter1->getHealth() > 0 && fighter2->getHealth() > 0)
  {
    fighter1->setHealth(fighter1->getHealth() - fighter2->getDamagePerAttack());
    fighter2->setHealth(fighter2->getHealth() - fighter1->getDamagePerAttack());
  }

  if(fighter1->getHealth() <= 0 && fighter2->getHealth() <= 0)
  {
    std::cout << "1" << std::endl;
    return firstAttacker;
  }
  else if(fighter1->getHealth() < 0 && fighter2->getHealth() > 0)
  {
    std::cout << "2" << std::endl;
    return fighter2->getName();
  }
  else
  {
    std::cout << "3" << std::endl;
    return fighter1->getName();
  }
}
