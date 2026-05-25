//#include <iostream>
//#include<print>
//#include "log.h"
//#include "string"
//#include <cstdint>
//#include "stdlib.h"
//
//using string = std::string;
//class entity
//{
//
//public:
//	entity()
//	{
//		std::cout << "object created" << std::endl;
//	}
//
//	~entity()
//	{
//		std::cout << "object destroyed" << std::endl;
//	}
//	void print(const std::string& msg)
//	{
//	}
//};
//
//
//
//int main() {
//
//	std::shared_ptr<entity>e;
//	std::weak_ptr<entity>e0;
//	{
//		std::shared_ptr<entity>sharedentity = std::make_shared<entity>();
//		sharedentity->print("ace");
//		e = sharedentity;
//		e0 = sharedentity;
//
//
//	}
//
//	std::unique_ptr<entity>e = std::make_unique<entity>();
//
//	//std::unique_ptr<entity>e1 = e; we cant do this as e uniquely points one object on heap and delets after the scope ends.if we make another copy pf ptr
//	//pointing to the same obj the at end of its scope it will delete the obj as well but if the first ptr deletes it first and this ptr has noting to delete
//	//hence crashing the system this is called """"double delete"""".
//}