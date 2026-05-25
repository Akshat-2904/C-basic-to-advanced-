//#include <iostream>
//#include<print>
//#include "Log.h"
//#include "string"
//#include <cstdint>
//#include "stdlib.h"
//
//class String
//{
//private:
//	char* Mbuffer;
//	unsigned int MSize;
//public:
//	String(const char* string)
//	{
//
//		MSize = strlen(string);
//		Mbuffer = new char[MSize + 1];//+1 for null termination character
//
//		memcpy(Mbuffer, string, MSize);
//		Mbuffer[MSize] = 0;//null termination character
//	}
//
//	String(const String& other)//deep copy
//		:MSize(other.MSize)
//	{
//		std::cout << "copied" << std::endl;
//		Mbuffer = new char[MSize + 1];
//		memcpy(Mbuffer, other.Mbuffer, MSize + 1);
//
//	}
//	friend std::ostream& operator <<(std::ostream& stream, const String& string);
//
//	char& operator [] (const int& x)
//	{
//		return  Mbuffer[x];
//	}
//
//	~String()
//	{
//		delete[]Mbuffer;
//	}
//};
//
//std::ostream& operator <<(std::ostream& stream, const String& string)
//{
//	stream << string.Mbuffer;
//	return stream;
//}
//
//void PrintString(const String& string)
//{
//	std::cout << string << std::endl;
//}
//
//int main()
//{
//	/*String* string=new String("Ace");
//
//	std::cout << string << std::endl;*/ //without the operatoe overlloading you cant print it even with aptr as its a private variable
//
//	String string = ("Ace");
//	String string2 = string;
//
//	//this will crash the system as string2 now has same ptr Mbuffer with same adress and when run the deconstrucer 
//	//the mbuferr tries to get deleted twice which is not possible this is double delete
//
//
//	string2[2] = 'o';
//
//	//std::cout << string << std::endl;//no null termination results in garbage value
//	//std::cout << string2 << std::endl;
//	PrintString(string);
//	PrintString(string2);
//}
////rember to use private varibales with operators u will have to ovrride the oprators