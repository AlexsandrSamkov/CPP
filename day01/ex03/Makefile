NAME		= 	hiThisIsBrain
OBJS_PATH	=	objects/
SRCS_PATH	=	./
HEAD_LST	=	HumanB.hpp HumanA.hpp Weapon.hpp
HEADS		=	$(addprefix -I , $(HEAD_LST))
SRCS_LIST	=	main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
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

clean:
	$(RM) $(OBJS_PATH)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re run
