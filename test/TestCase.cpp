//
// Created by Martin on 17.03.2020.
//
#define CATCH_CONFIG_MAIN
#include "../catch2/catch.hpp"
#include "../src/Service/GameStateManager.h"


TEST_CASE("Test")
{
  GameStateManager game_state_manager{};
  GameState game_state = game_state_manager.create_game_state();

  REQUIRE(game_state.get_id() == 0);

  SECTION("Adding a new gamestate")
  {
    GameState game_state2 = game_state_manager.create_game_state();
    REQUIRE(game_state2.get_id() == 1);
  }
}