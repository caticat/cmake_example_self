#include<iostream>

int main()
{
	std::cout << "Hello Compile Flags!" << std::endl;

#ifdef EX2
	std::cout << "Hello Compile Flag EX2!" << std::endl;
#endif

#ifdef EX3
	std::cout << "Hello Compile Flag EX3!" << std::endl;
#endif

	return 0;
}
