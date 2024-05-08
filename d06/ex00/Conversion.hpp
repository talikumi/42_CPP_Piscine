#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <iostream>
# include <iomanip>
# include <cstdlib>
# include <climits>

class	Conversion
{
	private:
		std::string	m_str;
		int			m_getPrecision(void) const;
	
	public:
		Conversion(void);
		Conversion(std::string);
		Conversion(const Conversion&);
		Conversion& operator=	(const Conversion&);

		virtual ~Conversion(void);

		void	setStr(std::string);

		operator char() const;
		operator int() const;
		operator float() const;
		operator double() const;

		class ConversionErrorException : public std::exception
		{
		   public:
				ConversionErrorException(void);
				ConversionErrorException(const ConversionErrorException&);

				virtual ~ConversionErrorException(void) throw();

				ConversionErrorException& operator=	(const ConversionErrorException&);

				virtual const char	*what() const throw();
		};
};

#endif
