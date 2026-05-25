#include <iostream>
#include<print>
#include "Log.h"
#include "string"
#include <cstdint>
#include "stdlib.h"

class Entity
{
private:

   mutable int  StringCount;
   std::string MString;
public:


   const std::string& GetString() const
   {
       StringCount++;//we can modify value due to mutable type int .
       return MString;

   }



};

int main() {
   Entity e;
   std::string S;
   S = e.GetString();// this performs a copy


   int ab = 0;
   int ac = 89;
   int* a = new int;
   a = &ac;

   auto f = [=]() mutable //lambda 
       {
           ab++;
       };
   //ab is still the same.
   *a = 67;
   std::printf("%d", ac);

}
