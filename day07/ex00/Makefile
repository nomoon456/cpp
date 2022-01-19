NAME = a.out
CC = clang++
CFLAGS = -Wall -Wextra -Werror
CPP_VERSION = -std=c++98
SRCS = main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	@ $(CC) $(CFLAGS) $(SRCS) -o $(NAME)

run:
	./$(NAME)
clean:
	@ rm -f $(NAME)

fclean : clean

re : fclean all