#include <iostream>
#include<print>
#include "Log.h"

#include <cstdint>


class Entity {

public:
   float x, y;

   void move(float xa, float ya)
   {
       x += xa;
       y += ya;
   }
};

class Player : public Entity
{
public:
   const  char* Name;

   void PrintName()
   {
       std::printf(Name);
   }


};

int main() {

}
