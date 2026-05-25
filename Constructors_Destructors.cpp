//
//
//#include <iostream>
//#include<print>
// #include "Log.h"
//
//#include <cstdint>
//
//
//struct Entity {
//
//   int x, y;
//
//    Entity(){
//
//        x = 0;
//        y = 0;
//    
//    
//    }
//
//    ~Entity()
//    {
//    
//        std::printf("destroyed Entity");
//    
//    }
//
//    void print()
//    {
//        std::printf("%d", x);
//        std::printf("%d", y);
//
//    }
//};
//
//
//
//enum class Example :std::uint8_t
//{
//    A, B, C
//
//};
//
//class player
//{
//public:
//    int x=0, y=0;
//    int speed=0;
//
//
//    void move(int speed)
//    {
//        x += 1;
//        y += 1;
//        speed += speed;
//    }
//
//
//};
//
//
//void Function() //out as ,if we execute this in main the the obj gets destroyrd while exiting main func ,here obj get destroyed as it in a function which gets executed first.
//{
//    Entity e;
//    e.print();
//
//}
//
//int main() {
//   
//
//    Function();
//
//    
//    
//}