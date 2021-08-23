NAME		= 	ex03
OBJS_PATH	=	objects/
HEAD_LST	=	ICharacter.hpp AMatria.hpp IMateriaSource.hpp MateriaSource.hpp\
				Character.hpp Ice.hpp Cure.hpp
HEADS		=	$(addprefix -I , $(HEAD_LST))
SRCS_PATH	=	./
SRCS_LIST	=	main.cpp AMatria.cpp Character.cpp MateriaSource.cpp Ice.cpp Cure.cpp
SRCS		=	$(addprefix $(SRCS_PATH), $(SRCS_LIST))
OBJS_LIST	=	$(patsubst %.cpp, %.o, $(SRCS_LIST))
OBJS		=	$(addprefix $(OBJS_PATH),$(OBJS_LIST))
RM			= 	rm -rf
CC			=	clang++
FLAGS		=	-Wall -Wextra -Werror -Wshadow -std=c++98

all: $(NAME) 

$(NAME): $(OBJS_PATH) $(OBJS) 
	$(CC) $(FLAGS) $(HEADS) $(OBJS) -o $(NAME)

$(OBJS_PATH):
	mkdir -p $(OBJS_PATH)

$(OBJS_PATH)%.o : $(SRCS_PATH)%.cpp $(HEAD_LST)
	$(CC) $(FLAGS) -c  $< -o $@

run: all
	./$(NAME)

leaks: run
	leaks --atExit  -- ./$(NAME)

debug:
	$(CC) -g -fsanitize=address $(FLAGS) $(HEADS) $(SRCS) -o $(NAME)

clean:
	$(RM) $(OBJS_PATH)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re run debug
