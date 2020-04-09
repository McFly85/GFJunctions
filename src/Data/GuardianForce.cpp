//
// Created by Martin on 12.03.2020.
//

#include "GuardianForce.h"
#include "Character.h"
#include "Ability.h"

GuardianForce::GuardianForce(const std::string& name) : name(name) {}
GuardianForce::~GuardianForce() {}

std::string GuardianForce::get_name() const
{
  return this->name;
}
