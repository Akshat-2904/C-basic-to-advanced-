#include"iostream"
#include "vector"
struct Vertex
{
	float x, y, z;

	Vertex(float x, float y, float z)
		:x(x), y(y), z(z)
	{

	}

	Vertex(const Vertex& v)
		:x(v.x), y(v.y), z(v.z)
	{
		std::cout << "Copied" << std::endl;
	}
};

std::ostream& operator <<(std::ostream& stream, const Vertex& vertex)
{
	stream << vertex.x << "," << vertex.y << "," << vertex.z;
	return stream;
}
//when  a element is added,and if during adding the capacity of array runs rounds the vectors arrays copies itself into anew bigger array
//we need to avoid this copies
int main()
{
	std::vector<Vertex>Vertices;

	Vertices.reserve(3);//the null vetrex obj are created increase the size of vector ,preventing the second copy

	Vertices.emplace_back(1, 3, 4);
	Vertices.emplace_back(1, 9, 4);//instead of passing the object pass the parameters for the obj hence the obj is directly made in the vector memory.prevents first copy


	//he firsty copy happens because when we create a vertex its in the main function memory so in order to 
	  //allocate it in the vector(dynamic array) memory we need to copy it.this can be optimized if we directly create the vertex in the vector memory
	  //the second copy happens because the vector limits gets reached so needs to resize the meory evry time the element is added hence another copy
	  //we slove this by making the vertex increse it memory by more than one size

	for (const Vertex& v : Vertices)//using const will avoid copying in v
		std::cout << v << std::endl;

	Vertices.erase(Vertices.begin() + 1);

	std::cout << Vertices.size() << std::endl;
	for (int i = 0; i < Vertices.size(); i++)
	{

		std::cout << Vertices[i] << std::endl;
	}


}
// always pas array in function using &(ref)
