NAME = megaphone
CC = c++ -Wall -Wextra -Werror -std=c++98
RM = rm -f
SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $^ -o $@

%.o : %.cpp 
	$(CC) -c $< -o $@

clean: 
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
