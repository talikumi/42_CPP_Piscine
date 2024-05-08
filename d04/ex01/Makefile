CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic -g

NAME = animal

SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp

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
