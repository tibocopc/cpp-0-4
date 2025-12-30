NAME = Identify
CC = c++
CFLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98

SRCS = main.cpp Identify.cpp
OBJS = $(SRCS:.cpp=.o)
INCLUDES = Identify.hpp

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(INCLUDES)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
