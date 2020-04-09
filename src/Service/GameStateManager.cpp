//
// Created by Martin on 16.03.2020.
//

#include "GameStateManager.h"
#include "../Data/GameState.h"

std::shared_ptr<GameState> GameStateManager::get_game_state(int id) const
{
  for (const auto& game_state : game_states) {
    if (game_state.get_id() == id) {
      return std::make_shared<GameState>(game_state);
    }
  }
  return nullptr;
}

int GameStateManager::create_game_state()
{
  GameState gs = GameState(this->id_counter);
  game_states.push_back(gs);
  return id_counter++;
}