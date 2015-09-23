#include <iostream>
#include <cstdlib>

int main(int argc, char *argv[])
{
	if (argc <= 1)
	{
		std::cout << "Usage: " << argv[0] << " <Filename> " << std::endl;
		std::exit(1);
	}
	
	return 0;
}
