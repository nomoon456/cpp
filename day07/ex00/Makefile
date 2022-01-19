NAME = a.out
CC = clang++
CFLAGS = -Wall -Wextra -Werror
CPP_VERSION = -std=c++98
SRCS = main.cpp

all: $(NAME)

$(NAME): $(SRCS)
<<<<<<< HEAD
	@ $(CC) $(CFLAGS) $(SRCS) -o $(NAME)
=======
	@ $(CC) $(CPP_VERSION) $(CFLAGS) $(SRCS) -o $(NAME)
>>>>>>> c8e73f5fcaada56d62f15149255a080f77d361a2

run:
	./$(NAME)
clean:
	@ rm -f $(NAME)

fclean : clean

re : fclean all