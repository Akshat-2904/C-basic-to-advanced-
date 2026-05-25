//#include <iostream>
//#include<print>
//#include "Log.h"
//
//#include <cstdint>
//
//
//
//class Printable
//{
//public:
//    virtual std::string GetClassName() = 0;// pure vitrual function
//};
//class Entity :public Printable
//{
//
//public:
//    virtual std::string GetName() { return "Entity"; }
//    std::string GetClassName() override { return "ClassName:Entity"; }//implementation of pure vitrual function
//};
//
//class Player : public Entity
//{
//private:
//    std::string M_Name;
//
//public:
//    Player(const std::string& name)
//        :M_Name(name) {
//    }
//
//
//    std::string GetName() override { return M_Name; }//implementation of pure vitrual function
//
//    std::string GetClassName() override { return "ClassName:Player"; }
//};
//
//void PrintName(Entity* En)
//{
//    std::cout << En->GetName() << std::endl;
//}
//
//
//void GetClassName(Printable* p)//takes the ptr to interface class
//{
//    std::cout << p->GetClassName() << std::endl;
//}
//
//int main() {
//
//
//
//    Player* p = new Player("Ace");
//    GetClassName(p);
//
//    PrintName(p);
//
//
//
//}