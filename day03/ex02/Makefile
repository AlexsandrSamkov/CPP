NAME		= 	ex02
OBJS_PATH	=	objects/
HEAD_LST	= 	ScavTrap.hpp ClapTrap.hpp FragTrap.hpp
HEADS		=	$(addprefix -I , $(HEAD_LST))
SRCS_PATH	=	./
SRCS_LIST	=	ClapTrap.cpp main.cpp ScavTrap.cpp FragTrap.cpp
SRCS		=	$(addprefix $(SRCS_PATH), $(SRCS_LIST))
OBJS_LIST	=	$(patsubst %.cpp, %.o, $(SRCS_LIST))
OBJS		=	$(addprefix $(OBJS_PATH),$(OBJS_LIST))
RM			= 	rm -rf
CC			=	clang++
FLAGS		=	-Wall -Wextra -Werror -std=c++98


all: $(NAME) 

$(NAME): $(OBJS_PATH) $(OBJS) 
	$(CC) $(FLAGS) $(HEADS) $(OBJS) -o $(NAME)

$(OBJS_PATH):
	mkdir -p $(OBJS_PATH)

$(OBJS_PATH)%.o : $(SRCS_PATH)%.cpp $(HEAD_LST)
	$(CC) $(FLAGS) -c  $< -o $@

run: all
	./$(NAME)
debug:
	$(CC) -g $(FLAGS) $(HEADS) $(SRCS) -o $(NAME)
clean:
	$(RM) $(OBJS_PATH)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re run
