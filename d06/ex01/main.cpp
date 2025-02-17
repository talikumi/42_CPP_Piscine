#include "Serialization.hpp"

int
main(void)
{
	void*	raw;
	Data*	data;

	raw = serialize();
	data = deserialize(raw);
	std::cout << "main:" << std::endl <<
				"s1: " << (*data).s1 << std::endl <<
				" n: " << (*data).n << std::endl <<
				"s2: " << (*data).s2 << std::endl;
}
