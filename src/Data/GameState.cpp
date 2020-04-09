//
// Created by Martin on 15.03.2020.
//

#include "GameState.h"
#include "Role.h"

bool GameState::is_gf_available(const std::string& gf_name) const
{
  for (const auto& gf : available_gf) {
    if (gf.get_name() == gf_name) {
      return true;
    }
  }
  return false;
}

int GameState::get_id() const
{
  return this->id;
}

void GameState::make_available(const GuardianForce& gf)
{
  this->available_gf.push_back(gf);
}

GameState::GameState(int id) : id(id)
{
  available_gf = std::vector<GuardianForce>();
}
