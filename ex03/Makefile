NAME 	=	ex03
HDR		=	main.h Bureaucrat.h Form.h PresidentialPardonForm.h RobotomyRequestForm.h ShrubberyCreationForm.h Intern.h
SRC		=	main.cpp Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp

OBJ		=	$(patsubst %.cpp,%.o,$(SRC))

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
RM		=	rm -rf

%.o:		%.cpp $(HDR)
	$(CC) $(CFLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
