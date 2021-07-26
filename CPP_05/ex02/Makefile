# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hyunlee <hyunlee@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/26 19:37:03 by hyunlee           #+#    #+#              #
#    Updated: 2021/07/26 19:37:59 by hyunlee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat
CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98
#CFLAGS = -g3 -fsanitize=address

SRCS = 	./main.cpp	\
		./Bureaucrat.cpp	\
		./Form.cpp	\
		./ShrubberyCreationForm.cpp	\
		./RobotomyRequestForm.cpp	\
		./PresidentialPardonForm.cpp

OBJS = $(SRCS:.cpp=.o)
RM = rm -f

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o : %.cpp
	$(CC) $(CFLAGS) -o $@ -c $^

clean :
	@$(RM) -r $(OBJS)
	@$(RM) *_shrubbery

fclean : clean
	@$(RM) $(NAME)

re : fclean all
