//
// Created by Martin on 12.03.2020.
//

#include "Ability.h"
#include "Character.h"
#include <cstdint>
#include <vector>
#include <ostream>
#include <memory>

#ifndef GFJUNCTION_GUARDIANFORCE_H
#define GFJUNCTION_GUARDIANFORCE_H

class Character;
static constexpr uint8_t max_number_of_abilities{ 22 };

class GuardianForce
{
public:
  GuardianForce(const std::string& name);
  virtual ~GuardianForce();

  std::string get_name() const;

  Character get_junctioned() const;
  bool junction(Character& junctioned);
  friend std::ostream& operator<<(std::ostream& os, const GuardianForce& force);

private:
  std::string name;
};


#endif//GFJUNCTION_GUARDIANFORCE_H