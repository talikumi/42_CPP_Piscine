NAME = serialization
CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o : %.cpp
	$(CXX) $(CXXFLAGS) -c $<

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
