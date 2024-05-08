NAME = megaphone

GCC = clang++

FLAGS = -Wall -Wextra -Werror

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o : %.cpp
	@$(GCC) $(FLAGS) -c $<

$(NAME) : $(OBJ)
	$(info Compiling...)
	@$(GCC) $(FLAGS) $(OBJ) -o $@
	$(info Cleaning...)
	@make clean
	$(info Success!)

clean:
	@rm -f $(OBJ)

fclean:
	@rm -f $(NAME)

re: fclean all