#include <iostream>

#include "test.pb.h"
#include "test1.pb.h"

int main()
{
	std::cout << "111" << std::endl;

	test::Data data;
	data.set_id(1);
	data.set_data("abc123");
	data.PrintDebugString();

	test1::Data1 data1;
	data1.set_id1(10);
	data1.set_data1("10abc123");
	data1.PrintDebugString();

	return 0;
}
