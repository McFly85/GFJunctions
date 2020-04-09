//
// Created by Martin on 16.03.2020.
//

#ifndef GFJUNCTION_GAMESTATEMANAGER_H
#define GFJUNCTION_GAMESTATEMANAGER_H

#include "../Data/GameState.h"
#include <memory>

class GameStateManager
{
public:
  std::shared_ptr<GameState> get_game_state(int id) const;
  int create_game_state();

private:
  int id_counter{ 0 };
  std::vector<GameState> game_states;
};


#endif//GFJUNCTION_GAMESTATEMANAGER_H
