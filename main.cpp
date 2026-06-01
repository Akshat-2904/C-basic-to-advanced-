//template makes the complier write for you



#include"iostream"

//template<typename T>//templates are valueated at complie time
template<typename T,int N>
class Array
{

private:
	T MArray[N];//as in stack Size needs to valueated at complie time 

public:
	int GetSize() const
	{
		return N;
	}

};


//void Print(T value)
//{

	//std::cout << value << std::endl;
//}
//void print(float value)
//{
//
//	std::cout << value << std::endl;
//}
//void print(std::string value)
//{
//
//	std::cout << value << std::endl;
//}
//

//instead of writing the multiple overloada of the same fucntion we can use templates


int main()
{
	//Print(4);// whatever value is passed is set as T during complie
	//Print("hello");
	//Print(2.0);

	//Print<int>(5);
	// //we can specify the typename but we donot need to

	Array<int,5> array;// this replaces N with 5,typename with int

}

//if we dont call the Print funtion then it dose not exsist,because template only gets created only when we call it.
//every time a new type of vaue is passed .its as if complier cretes a copy of the same function but the passed data type
