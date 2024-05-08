CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

NAME = amateria

SRCS = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp

OBJS = $(SRCS:.cpp=.o)

RM = rm -f

%.o:%.cpp
	$(CXX) $(CXXFLAGS) -c $<

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
