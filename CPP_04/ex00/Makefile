NAME	=	animal

SRC		=	main.cpp \
			Animal.cpp \
			Cat.cpp \
			Dog.cpp \
			WrongAnimal.cpp \
			WrongCat.cpp


HDR		=	Animal.hpp \
			Cat.hpp \
			Dog.hpp \
			WrongAnimal.hpp \
			WrongCat.hpp


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
