//
// Created by Martin on 15.03.2020.
//

#ifndef GFJUNCTION_GAMESTATE_H
#define GFJUNCTION_GAMESTATE_H

#include <vector>
#include <string>

#include "GuardianForce.h"
#include "Character.h"
#include "Junction.h"

class Role;

class GameState
{
public:
  GameState(int id);

public:
  void make_available(const GuardianForce& gf);
  void make_available(const Character& character);

  bool is_gf_available(const std::string& gf_name) const;
  bool is_character_available(const std::string& character_name) const;

  int get_id() const;

private:
  int id;
  std::vector<GuardianForce> available_gf{};
  std::vector<Character> available_characters{};
  //std::vector<Role> available_roles;
  std::vector<std::shared_ptr<GFJunction>> gf_junctions;
  std::vector<std::shared_ptr<AbilityJunction>> ability_junctions;
  std::vector<std::shared_ptr<AbilityKnowledge>> abilities_learned;
};


#endif//GFJUNCTION_GAMESTATE_H
