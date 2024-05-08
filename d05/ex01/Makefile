NAME = bureaucrat
CXX = clang++
FLAGS = -Wall -Wextra -Werror
RM = rm -f

SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o : %.cpp
	$(CXX) $(FLAGS) -c $<

$(NAME) : $(OBJ)
	$(CXX) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
