//
// Created by Martin on 15.03.2020.
//

#include "Role.h"
Role::Role(const std::string& name) : name(name) {}
void Role::add_ability_score(const Ability& ability, int score)
{
  this->abilities.emplace(ability.getName(), std::make_pair(ability, score));
}

int Role::get_ability_score(const Ability& ability)
{
  if (this->abilities.count(ability.getName())) {
    return abilities.at(ability.getName()).second;
  }
  return 0;
}

int Role::get_role_score(const std::vector<Ability>& abilities)
{
  int result{ 0 };
  for (auto& item : abilities) {
    result += get_ability_score(item);
  }
  return result;
}
