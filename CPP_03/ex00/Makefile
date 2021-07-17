# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hyunlee <hyunlee@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/17 14:24:19 by hyunlee           #+#    #+#              #
#    Updated: 2021/07/17 14:24:20 by hyunlee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = claptrap
CC = clang++
CFLAGS = -Wall -Wextra -Werror #-std=c++98
#CFLAGS = -g3 -fsanitize=address

SRCS = 	./main.cpp	\
		./ClapTrap.cpp

OBJS = $(SRCS:.cpp=.o)
RM = rm -f

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o : %.cpp
	$(CC) $(CFLAGS) -o $@ -c $^

clean :
	@$(RM) -r $(OBJS)

fclean : clean
	@$(RM) $(NAME)

re : fclean all
