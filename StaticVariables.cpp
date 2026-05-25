#include"iostream"


//static in a local scope
//the lifetime and scopr of variable
//lifetime refers to how long the variable will be alive
//scope is wherr we can access it


class single
{
public:
	static single& Get()
	{
		static single instance;
		return instance;
	}
};

void fn()
{
	static int i = 0;// this variable will be same for all calls
	//that mesns if multiple function acess this value they will get the value modified by the previous function call
	//much like global variable(bbut global variable can nbe accsesed any where)
   //hence extending its lifetime forever
	std::cout << i << std::endl;
}


int main()
{
	single::Get();
	single* s;
	s->Get();// this is wrong as staic functions are used when no object is needed to trigger them they are independent on there own

}
