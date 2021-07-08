# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hyunlee <hyunlee@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/08 19:29:24 by hyunlee           #+#    #+#              #
#    Updated: 2021/07/08 19:31:19 by hyunlee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain
CC = clang++
CFLAGS = -Wall -Wextra -Werror #-std=c++98
#CFLAGS = -g3 -fsanitize=address

SRCS = ./main.cpp
OBJS = $(SRCS:.cpp=.o)
RM = rm -f

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(OBJS) : $(SRCS)
	$(CC) $(CFLAGS) -o $@ -c $^

clean :
	@$(RM) -r $(OBJS)

fclean : clean
	@$(RM) $(NAME)

re : fclean all
