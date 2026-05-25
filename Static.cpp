#include"iostream"
#include"Log.h"
#include"print"


//static int s_Level = 1; static ensures that this varible is only for this file
//// always use static if these variables are global and are not going be used else where
//in another file

struct Entity {

	static int x, y;

	 void print()
	{
		std::printf("%d",x);
		std::printf("%d", y);

	}
//Use static functions when:

//Function doesn’t depend on object data
//Utility/helper functions (math, logging, config)
//Factory methods
//Shared behavior across all objects

class Logger {
public:
	static void log(std::string msg) {
		std::cout << "[LOG]: " << msg << std::endl;
	}
};



 static int main() //ensure that this function will be only available to this file
{
	Entity en;
	en.x = 10;
	en.y = 10;

	Entity e1;
	e1.x = 0;
	e1.y = 9;
	
	e1.print();
	en.print();
	return 0;
	Logger::log("Game started");

}

// ===== Example: Static vs Non-Static in Unreal-style =====

// ---------- Static Class (like UGameplayStatics) ----------
//class MyMathHelper
//{
//public:
//	static int Add(int a, int b);  // static function
//};
//
//// Definition
//int MyMathHelper::Add(int a, int b)
//{
//	return a + b;
//}
//
//// Usage (NO object needed)
//int result1 = MyMathHelper::Add(5, 3);
//
//
//// ---------- Non-Static Class ----------
//#include <iostream>
//using namespace std;
//
//class MyUtility
//{
//public:
//	// Static function
//	static void SayHello()
//	{
//		cout << "Hello from static function!" << endl;
//	}
//};
//
//int main()
//{
//	// ---------- Call the static function ----------
//	MyUtility::SayHello();  // no object needed
//
//	return 0;
//}
//
//
//// ---------- Unreal Real Example ----------
//APawn* Pawn = UGameplayStatics::GetPlayerPawn(this, 0);
//// static → called using Class::Function()
//
//FVector Location = Pawn->GetActorLocation();
//// non-static → called using object->Function()
