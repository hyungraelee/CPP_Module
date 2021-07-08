# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hyunlee <hyunlee@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/08 19:29:08 by hyunlee           #+#    #+#              #
#    Updated: 2021/07/08 19:31:37 by hyunlee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombiehorde
CC = clang++
CFLAGS = -Wall -Wextra -Werror #-std=c++98
#CFLAGS = -g3 -fsanitize=address

OBJS_DIR = ./objs
SRCS =	./main.cpp	\
		./Zombie.cpp	\
		./ZombieHorde.cpp

OBJS = $(addprefix $(OBJS_DIR)/, $(notdir $(SRCS:.cpp=.o)))
RM = rm -f

all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(OBJS_DIR) :
	@mkdir -p $(OBJS_DIR)

$(OBJS_DIR)/%.o : %.cpp | $(OBJS_DIR)
	$(CC) $(CFLAGS) -o $@ -c $^

clean :
	@$(RM) -r $(OBJS_DIR)

fclean : clean
	@$(RM) $(NAME)

re : fclean all
