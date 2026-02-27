#include "Point.hpp"

int main(void)
{
	Point a(0.0f, 0.0f);
	Point b(10.0f, 0.0f);
	Point c(0.0f, 10.0f);

	std::cout << "Inside (2,2): " << bsp(a, b, c, Point(2.0f, 2.0f)) << std::endl;
	std::cout << "Outside (10,10): " << bsp(a, b, c, Point(10.0f, 10.0f)) << std::endl;
	std::cout << "On edge (5,0): " << bsp(a, b, c, Point(5.0f, 0.0f)) << std::endl;
	std::cout << "Vertex (0,0): " << bsp(a, b, c, Point(0.0f, 0.0f)) << std::endl;
	return 0;
}
