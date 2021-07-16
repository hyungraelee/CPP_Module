NAME = diamondtrap
CC = clang++
CFLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow #-std=c++98
#CFLAGS = -g3 -fsanitize=address

SRCS = 	./main.cpp	\
		./ClapTrap.cpp	\
		./ScavTrap.cpp	\
		./FragTrap.cpp	\
		./DiamondTrap.cpp

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
