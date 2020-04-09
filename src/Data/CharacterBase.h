//
// Created by Martin on 16.03.2020.
//

#ifndef GFJUNCTION_CHARACTERBASE_H
#define GFJUNCTION_CHARACTERBASE_H


#include <string>


// Extend this for more character base functionality
class CharacterBase
{
public:
  CharacterBase(const std::string& first_name, const std::string& last_name);

private:
  std::string first_name;
  std::string last_name;
};


#endif//GFJUNCTION_CHARACTERBASE_H
