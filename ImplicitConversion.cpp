#include <iostream>
#include<print>
#include "Log.h"
#include "string"
#include <cstdint>
#include "stdlib.h"

using String = std::string;

class Entity
{
private:
   String MName;
   int MAge;

public:
   explicit Entity(int age) : MName("Unknow"), MAge(age) {}
   Entity(const String& Name) :MName(Name), MAge(-1) {}

   const String& GetName() const { return MName; }

};




int main() {

   Entity a = 12;// error due to explicit 
   Entity b = std::string("Ace");
}
