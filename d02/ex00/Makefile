CC = clang++
CFLAGS = -Wall -Wextra -Werror 
NAME = fixedstart
SRCS = main.cpp Fixed.cpp
OBJS = $(SRCS:.cpp=.o)
RM = rm -f

%.o: %.cpp
	$(CC) $(CFLAGS) -c $<

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
