#include <iostream>
#include<print>
#include "Log.h"
#include "string"
#include <cstdint>
#include "stdlib.h"

using String = std::string;

struct Vector2
{
   float x, y;
   Vector2(float x, float y) :x(x), y(y) {}

   Vector2 Add(const Vector2& Other) const //adds current vec obj to the parameter one
   {
       //return *this + Other;// type1: in this case as we use  const after the func it becomes a const pointer so we derefrence it to normal vector2 to modify it
       // return operator +(Other);type1a

       return Vector2(x + Other.x, y + Other.y);

   }
   Vector2 Multiply(const Vector2& Other) const //adds current vec obj to the parameter one
   {
       return Vector2(x * Other.x, y * Other.y);

   }

   Vector2 operator +(const Vector2& Other) const
   {

       // return Vector2(x + Other.x, y + Other.y);type1
       return Add(Other);
   }

   Vector2 operator *(const Vector2& Other) const
   {

       // return Vector2(x + Other.x, y + Other.y);type1
       return Multiply(Other);
   }
};


std::ostream& operator <<(std::ostream& Stream, const Vector2& Other)//overloading left shift operator..cout is a ostream type and we need ostream type to display so we take stram
{
   Stream << Other.x << "," << Other.y;
   return Stream;
}

int main() {

   Vector2 Postion(50.0f, 69.0f);
   Vector2 Speed(20.0f, 30.0f);
   Vector2 Powerup(20.0f, 30.0f);

   Vector2 Result = Speed.Add(Postion.Multiply(Powerup)); //this very complex and inefficent

   Vector2 Result = Postion + Speed * Powerup;//makes code much cleaner
   std::cout << Result << std::endl;

}
