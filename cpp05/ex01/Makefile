NAME = Form
CC = c++
CFLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98

SRCS = Bureaucrat.cpp main.cpp Form.cpp
OBJS = $(SRCS:.cpp=.o)
INCLUDES = Bureaucrat.hpp Form.hpp

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
