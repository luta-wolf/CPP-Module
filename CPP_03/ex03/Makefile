NAME	=	diamondtrap

SRC		=	main.cpp \
			ClapTrap.cpp \
			ScavTrap.cpp \
			FragTrap.cpp \
			DiamondTrap.cpp

HDR		=	ClapTrap.hpp \
			ScavTrap.hpp \
			FragTrap.hpp \
			DiamondTrap.hpp

# ---------------------------------
OBJ 	=	$(SRC:.cpp=.o)

CC		=	clang++

FLAGS	=	-Wall -Wextra -Werror -std=c++98

RM		=	rm -rf

#COLORS
GRN	=	"\033[32m"
END	=	"\033[00m"
# ----------------------------------
.PHONY:		all clean fclean re test

all:		$(NAME)

$(NAME):	$(OBJ) $(HDR)
			$(CC) $(FLAGS) $(OBJ) -I. -o $(NAME)
			@echo $(GRN) "\tCompiled "$(NAME)" successfully!" $(END)

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all
