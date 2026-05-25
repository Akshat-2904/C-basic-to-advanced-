#include"iostream"
#include "vector"
struct Vertex
{
	float x, y, z;
};

std::ostream& operator <<(std::ostream& stream, const Vertex& vertex)
{
	stream << vertex.x << "," << vertex.y << "," << vertex.z;
	return stream;
}

int main()
{
	std::vector<Vertex>Vertices;
	Vertices.push_back({ 1, 3, 4 });
	Vertices.push_back({ 1, 9, 4 });


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
