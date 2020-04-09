//
// Created by Martin on 16.03.2020.
//

#ifndef GFJUNCTION_JUNCTION_H
#define GFJUNCTION_JUNCTION_H


#include "Character.h"
#include "GuardianForce.h"
template<typename T1, typename T2>
class Junction
{
public:
  virtual T1 get_source() const = 0;
  virtual T2 get_target() const = 0;
};

class GFJunction : public Junction<Character, GuardianForce>
{
public:
  GFJunction(const Character& source, const GuardianForce& target);
  virtual ~GFJunction();
  Character get_source() const override;
  GuardianForce get_target() const  override;
private:
  Character source;
  GuardianForce target;
};

class AbilityJunction : public Junction<Character,Ability> {
public:
  AbilityJunction(const Character& source, const Ability& target);
  Character get_source() const override;
  Ability get_target() const override;
  virtual ~AbilityJunction();

private:
  Character source;
  Ability target;
};

class AbilityKnowledge : public Junction<GuardianForce,Ability> {
public:
  AbilityKnowledge(const GuardianForce& source, const Ability& target);
  GuardianForce get_source() const override;
  Ability get_target() const override;
  virtual ~AbilityKnowledge();

private:
  GuardianForce source;
  Ability target;
};


#endif//GFJUNCTION_JUNCTION_H
