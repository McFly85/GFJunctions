//
// Created by Martin on 12.03.2020.
//

#ifndef GFJUNCTION_CHARACTER_H
#define GFJUNCTION_CHARACTER_H
#pragma once

#include <string>
#include <vector>
#include <map>
#include "CharacterBase.h"

class GuardianForce;
class JunctionAbility;

/**
 *
 */
class Character
{
public:
  Character(const std::string& first_name, const std::string& last_name);
private:
  CharacterBase base;
  std::vector<GuardianForce> junctioned_gf;
  std::map<JunctionAbility, int> magic_junctions;
};

#endif//GFJUNCTION_CHARACTER_H
