//
// Created by Martin on 15.03.2020.
//

#ifndef GFJUNCTION_ROLE_H
#define GFJUNCTION_ROLE_H

#include <string>
#include <vector>
#include <map>
#include <utility>
#include "Ability.h"

class Role
{
public:
  Role();
  explicit Role(const std::string& name);
  void add_ability_score(const Ability& ability, int score);
  void modify_ability_score(const Ability& ability, int score);
  void remove_ability_score(const Ability& ability);
  int get_ability_score(const Ability& ability);
  int get_role_score(const std::vector<Ability>& abilities);

private:
  std::string name;
  std::map<std::string, std::pair<Ability, int>> abilities;
};


#endif//GFJUNCTION_ROLE_H
