NAME	=	materia

SRC		=	main.cpp \
			AMateria.cpp \
			Cure.cpp \
			Ice.cpp \
			Character.cpp \
			MateriaSource.cpp


HDR		=	AMateria.hpp \
			Cure.hpp \
			Ice.hpp \
			Character.hpp \
			ICharacter.hpp \
			IMateriaSource.hpp \
			MateriaSource.cpp

# ---------------------------------
OBJ 	=	$(SRC:.cpp=.o)

CC		=	c++

FLAGS	=	-Wall -Wextra -Werror -std=c++98

RM		=	rm -rf

#COLORS
GRN	=	"\033[32m"
END	=	"\033[00m"
# ----------------------------------
.PHONY:		all clean fclean re test

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(FLAGS) $(OBJ) -I. -o $(NAME)
			@echo $(GRN) "\tCompiled "$(NAME)" successfully!" $(END)

%.o:		%.cpp $(HDR)
			$(CC) $(FLAGS) -c $< -o $@

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all
