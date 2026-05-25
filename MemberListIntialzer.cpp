#include <iostream>
#include<print>
#include "Log.h"
#include "string"
#include <cstdint>
#include "stdlib.h"

class Example
{

public:

   Example()
   {
       std::printf("\nEntity Created");


   }

   Example(int x)
   {

       std::cout << "Created an Entity " << x << std::endl;
   }

};


class Entity
{
private:

   mutable int  StringCount;
   std::string MString;
   Example MExample;

public:
   Entity() :StringCount(0), MString("Unknow"), MExample(8)//always follow the declaration order 
   {
       // MExample = Example(8);// if  we intialize here two objects are created (run the code) 

   }

   const std::string& GetString() const
   {
       StringCount++;//we can modify value due to mutable type int .
       return MString;

   }



};

int main() {
   Entity e;



}
