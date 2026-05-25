#include <iostream>
#include<print>
#include "Log.h"
#include "string"
#include <cstdint>
#include "stdlib.h"

class Entity
{
private:
   int Mx, My;
   int* mx, * my;//decalring two pointers
   mutable int var;
public:
   int GetX() const/// using const we ensure that this function does not modify the member variables in any way
   {

       var = 5;
       return Mx;

   }

};



void PrintEntity(const Entity& e)//using ref will save memory
{
   std::cout << e.GetX() << std::endl;

}
int main() {

   int ab = 0;
   int ac = 89;
   int* a = new int;
   a = &ac;

   *a = 67;
   std::printf("%d", ac);

}
