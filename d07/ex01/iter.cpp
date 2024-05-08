#include "iter.hpp"

int	main()
{
	std::string str[] = { "ciao", "come", "stai", "?" };
	int num[] = { 42, 33, 15, 8, 12};


	iter(num, 5, print_val);
	iter(str, 4, print_val);

	return 0;
}