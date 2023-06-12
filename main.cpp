#include <iostream>

int main(int argc, char *argv[])
{
	std::ostream_iterator<std::string> oi{ std::cout };
	*oi = "Hello";
	++oi;
	*oi = " World!\n";
    
	return 0;

}