//
// Created by Martin on 12.03.2020.
//

#pragma once

#include <cstdint>
#include <string>
#include <iostream>
#include <memory>
#include "Requirement.h"


#ifndef GFJUNCTION_ABILITY_H
#define GFJUNCTION_ABILITY_H

/**
 * An ability is never modified, so all members are const.
 * This means we can reference an ability and dont have to copy it.
 * TODO: It might be a good idea to have and abstract class of ability and children with different types
 */
class Ability
{
public:
  Ability();
  virtual ~Ability();
  virtual std::string getName() const;
protected:
  std::string name;
  //GFRequirement gf_requirement;
  std::string effect;
};

class JunctionAbility : public Ability
{
public:
  JunctionAbility();
  virtual ~JunctionAbility();
};


#endif//GFJUNCTION_ABILITY_H
