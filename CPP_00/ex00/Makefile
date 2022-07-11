NAME	=	megaphone

SRC		=	megaphone.cpp

OBJ 	=	$(SRC:.cpp=.o)

CC		=	clang++

FLAGS	=	-Wall -Wextra -Werror -std=c++98

RM		=	rm -rf

.PHONY:		all clean fclean re test

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

test:		$(NAME)
			./megaphone "shhhhh... I think the students are asleep..."
			./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
			./megaphone
