
//#include"../../Projects/Engine/Engine.h" one way to do it but very wrong one
// we need to just add a addtional directory in project settings->c/c++ general.${SolutionDir}Engine\Source
//location to your header file


//we set the engine project as static lin from the properties ,hence after building it we get a .lib file
//this is the file we need to link the exe(Game) with
// to this we simple add refference from right clicking on the Game directory
//this makes game depended on engine
#include"Engine.h"

int main()
{

	engine::PrintMessage();
}
//now all we need is the Game.exe to run the app anywhere