NAME	=	phonebook

SRC		=	main.cpp \
			PhoneBook.cpp \
			Contact.cpp

HDR		=	PhoneBook.hpp \
			Contact.hpp
# ---------------------------------
OBJ 	=	$(SRC:.cpp=.o)

CC		=	clang++

FLAGS	=	-Wall -Wextra -Werror -std=c++98

RM		=	rm -rf

.PHONY:		all clean fclean re test

all:		$(NAME)

$(NAME):	$(OBJ) $(HDR)
			$(CC) $(FLAGS) $(OBJ) -I. -o $(NAME)
			@echo "Compiled "$(NAME)" successfully!"

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all
