#include <iostream>
#include "Service/GameStateManager.h"
#include "Data/GameState.h"

int main()
{
  std::cout << "Create GameStateManager\n";
  GameStateManager game_state_manager = GameStateManager();
  std::cout << "Create GameState\n";
  auto id = game_state_manager.create_game_state();
  std::cout << "Get GameState\n";
  auto game_state = game_state_manager.get_game_state(id);

  game_state->make_available(GuardianForce("diabolos"));
  game_state->make_available(GuardianForce("shiva"));
  game_state->make_available(GuardianForce("ifrit"));
  game_state->make_available(GuardianForce("siren"));

  auto gf_shiva_req = GFRequirement("shiva");

  std::cout << "Check if GF ifrit is available\n";
  if (game_state->is_gf_available("ifrit")) std::cout << "Ifrit is available!\n";

  std::cout << "CIN\n";
  int age;
  std::cin >> age;

  return 0;
}