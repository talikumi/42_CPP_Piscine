#include "Base.hpp"

void ptr_base(Base* p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C" << std::endl;
	else
		std::cout << "0" << std::endl;
}

void ref_base(Base& p)
{
	ptr_base((&p));
}

int main(void)
{
	A		a;
	B		b;
	C		c;

	ptr_base(&a);
	ptr_base(&b);
	ptr_base(&c);

	ref_base(c);
	ref_base(b);
	ref_base(a);
}
