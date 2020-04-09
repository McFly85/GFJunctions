//
// Created by Martin on 16.03.2020.
//

#include "Junction.h"
#include "Character.h"
#include "GuardianForce.h"

Character GFJunction::get_source() const
{
  return this->source;
}
GuardianForce GFJunction::get_target() const
{
  return this->target;
}
GFJunction::GFJunction(const Character& source, const GuardianForce& target) : source(source), target(target) {}
GFJunction::~GFJunction(){}

AbilityJunction::AbilityJunction(const Character& source, const Ability& target) : source(source), target(target) {}
AbilityJunction::~AbilityJunction(){}
Character AbilityJunction::get_source() const
{
  return this->source;
}
Ability AbilityJunction::get_target() const
{
  return this->target;
}

AbilityKnowledge::AbilityKnowledge(const GuardianForce& source, const Ability& target) : source(source), target(target) {}
AbilityKnowledge::~AbilityKnowledge(){}
GuardianForce AbilityKnowledge::get_source() const
{
  return this->source;
}
Ability AbilityKnowledge::get_target() const
{
  return this->target;
}
