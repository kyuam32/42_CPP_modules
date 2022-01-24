NAME = Repetitive_work

CC = clang++
#CFLAG = -std=c++98 -Wall -Wextra -Werror
CFLAG = -std=c++98 -g

FILE = main\
		ClapTrap\
		ScavTrap\
		FragTrap\

SRCDIR = ./
SRC = $(addprefix $(SRCDIR), $(addsuffix .cpp, $(FILE)))
OBJDIR = ./
OBJ = $(addprefix $(OBJDIR), $(addsuffix .o, $(FILE)))

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAG) $^ -o $@

$(OBJDIR)%.o : $(SRCDIR)%.cpp
	$(CC) $(CFLAG) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : all clean fclean re
