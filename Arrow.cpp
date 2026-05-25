//#include <iostream>
//#include<print>
//#include "Log.h"
//#include "string"
//#include <cstdint>
//#include "stdlib.h"
//
//class Entity
//{
//public:
//	void  Print() const { std::cout << "hello" << std::endl; }
//
//};
//struct Vector3
//{
//	float x, y, z;
//};
//
//class Scopedptr
//{
//private:
//	Entity* MObj;
//public:
//	Scopedptr(Entity* e) :MObj(e)
//	{
//
//	}
//
//	~Scopedptr()
//	{
//		delete MObj;
//	}
//
//	Entity* operator->()
//	{
//		return MObj;
//	}
//
//	const  Entity* operator->()const
//	{
//		return MObj;
//	}
//
//};
//
//int main()
//{
//	const Scopedptr entity(new Entity());
//
//
//
//	entity->Print();
//
//
//	int offset = (int)&((Vector3*)nullptr)->x;//finding memory offset
//
//	int offset2 = (int)&((Vector3*)nullptr)->y;
//
//
//	int offset3 = (int)&((Vector3*)nullptr)->z;
//
//	std::cout << offset << " " << offset2 << " " << offset3 << std::endl;
//
//
//
//
//}
