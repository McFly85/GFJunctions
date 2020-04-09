//
// Created by Martin on 12.03.2020.
//

#include "Character.h"
#include "GuardianForce.h"

Character::Character(const std::string& first_name, const std::string& last_name) : base(first_name, last_name), junctioned_gf(), magic_junctions() {}
