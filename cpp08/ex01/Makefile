NAME = Span
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp span.cpp
OBJS = $(SRCS:.cpp=.o)
INCLUDES = span.hpp

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
