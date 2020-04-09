//
// Created by Martin on 16.03.2020.
//

#ifndef GFJUNCTION_REQUIREMENT_H
#define GFJUNCTION_REQUIREMENT_H


#include "GuardianForce.h"
template <typename T> class OrRequirement;

template <typename T> class Requirement{
public:
  virtual ~Requirement() = default;
  virtual bool is_met_by(T target) const = 0;

};

template <typename T> OrRequirement<T> operator||
  (const Requirement<T>& first, const Requirement<T>& second)
{
  return { first, second };
}

template <typename T> class OrRequirement : Requirement<T>{
public:
  OrRequirement(const Requirement<T>& first, const Requirement<T>& second) : first(first), second(second){};
  bool is_met_by(T target) const override
  {
    return first.is_met_by(target) || second.is_met_by(target);
  }
  Requirement<T>& first;
  Requirement<T>& second;
};

class GFRequirement : Requirement<GuardianForce>{
public:
  GFRequirement(const std::string& allowed_gf);
  GFRequirement();
  ~GFRequirement();
  bool is_met_by(GuardianForce target) const override;
  std::string allowed_gf;
};


#endif//GFJUNCTION_REQUIREMENT_H
