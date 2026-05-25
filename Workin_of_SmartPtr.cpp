#include <iostream>
#include<print>
#include "Log.h"
#include "string"
#include <cstdint>
#include "stdlib.h"

using String = std::string;
class Entity
{

public:
	Entity()
	{
		std::cout << "Object Created" << std::endl;
	}

	~Entity()
	{
		std::cout << "Object Destroyed" << std::endl;
	}
};

class SmartPtr
{
private:
	Entity* Mptr;
public:
	SmartPtr(Entity* ptr) :Mptr(ptr)
	{

	}

	~SmartPtr()
	{

		delete Mptr;
	}


};

int main() {

	{
		SmartPtr e(new Entity());// SmartPtr e=new Entity();
		//though create on heap the ptr was on stack, as the ptr go deleted the deconctructor of Smartprt got called which deleted e. 
	}
}
