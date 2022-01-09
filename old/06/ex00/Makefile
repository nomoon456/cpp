NAME=convert
CC=clang++
CFLAGS=-Wall -Wextra -Werror
CPP_VERSION=-std=c++98
SRCS = OutPut.cpp Scalar.cpp main.cpp


all: $(NAME)

$(NAME): $(SRCS)
	@ $(CC) $(CFLAGS) $(SRCS) -o $(NAME) -g3 -fsanitize=address

run:
	./$(NAME)
clean:
	@ rm -f $(NAME)

fclean : clean

re : fclean all