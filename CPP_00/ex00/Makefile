NAME = megaphone
CC = clang++
CFLAGS = -Wall -Wextra -Werror #-std=c++98
#CFLAGS = -g3 -fsanitize=address

SRCS = ./megaphone.cpp
OBJS = $(SRCS:.cpp=.o)
RM = rm -f

all : $(NAME)

$(NAME) : $(OBJS)
	@$(CC) $(CFLAGS) -o $@ $^

$(OBJS) : $(SRCS)
	@$(CC) $(CFLAGS) -o $@ -c $^

clean :
	@$(RM) -r $(OBJS)

fclean : clean
	@$(RM) $(NAME)

re : fclean all
