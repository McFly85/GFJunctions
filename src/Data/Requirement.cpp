//
// Created by Martin on 16.03.2020.
//

#include "Requirement.h"



GFRequirement::~GFRequirement(){}
GFRequirement::GFRequirement(const std::string& allowed_gf){}
bool GFRequirement::is_met_by(GuardianForce target) const { target.get_name()==allowed_gf;}
