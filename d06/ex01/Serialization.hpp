#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

# include <iostream>
# include <string>
# include <string.h>
# include <cstdlib>

struct	Data
{
	std::string s1;
	int			n;
	std::string	s2;
};

void*	serialize(void);
Data*	deserialize(void*);

class	Serialization
{
	private:
		void*	m_raw;

	public:
		Serialization(void);
		Serialization(void*);
		Serialization(const Serialization&);
		Serialization& operator=	(const Serialization&);

		~Serialization(void);

		operator Data*() const;
};

#endif
