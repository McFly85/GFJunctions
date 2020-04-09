//
// Created by Martin on 16.03.2020.
//

#ifndef GFJUNCTION_JUNCTIONSETUP_H
#define GFJUNCTION_JUNCTIONSETUP_H

#include <vector>
class GuardianForce;

class JunctionSetup
{
  int ability_slots, comand_slots;
  std::vector<GuardianForce> junctioned_gf;
};


#endif//GFJUNCTION_JUNCTIONSETUP_H
