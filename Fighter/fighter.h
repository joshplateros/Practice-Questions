#ifndef FIGHTER_H
#define FIGHTER_H
#include <string>

class Fighter
{
public:
  Fighter(std::string name, int health, int damagePerAttack)
  {
    this->name = name;
    this->health = health;
    this->damagePerAttack = damagePerAttack;
  }

  ~Fighter(){};

  std::string getName()
  {
    return name;
  }
  int getHealth()
  {
    return health;
  }
  int getDamagePerAttack()
  {
    return damagePerAttack;
  }

  void setHealth(int value)
  {
    health = value;
  }
private:
  std::string name;
  int health;
  int damagePerAttack;
};

#endif //FIGHTER_H
