NAME = fights

GCC = clang++

FLAGS = -Wall -Wextra -Werror

SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o : %.cpp
	@$(GCC) $(FLAGS) -c $<

$(NAME) : $(OBJ)
	$(info Compiling...)
	@$(GCC) $(FLAGS) $(OBJ) -o $(NAME)
	$(info Cleaning...)
	@make clean
	$(info Success!)

clean:
	@rm $(OBJ)

fclean:
	@rm $(NAME)

re: fclean all