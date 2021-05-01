NAME		= MutantStack
SRCS		= MutantStack.cpp main.cpp
OBJS		= $(SRCS:.cpp=.o)
CC			= clang++
FLAGS 		= -Wall -Wextra -Werror -std=c++98
.cpp.o:
			clang++ $(FLAGS) -c $< -o ${<:.cpp=.o}
all:		$(NAME)
$(NAME):	$(OBJS)
			$(CC) $(FLAGS) $(OBJS) -o $(NAME)
clean:
			rm -f $(OBJS)
fclean:		clean
			rm -f $(NAME)
re:			fclean all
.PHONY:		all clean fclean re