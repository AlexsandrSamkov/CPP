NAME		= 	sedIsForLosers
OBJS_PATH	=	objects/
SRCS_PATH	=	./
SRCS_LIST	=	main.cpp
SRCS		=	$(addprefix $(SRCS_PATH), $(SRCS_LIST))
OBJS_LIST	=	$(patsubst %.cpp, %.o, $(SRCS_LIST))
OBJS		=	$(addprefix $(OBJS_PATH),$(OBJS_LIST))
RM			= 	rm -rf
CC			=	clang++
FLAGS		=	-Wall -Wextra -Werror -std=c++98

all: $(NAME) 

$(NAME): $(OBJS_PATH) $(OBJS) 
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

$(OBJS_PATH):
	mkdir -p $(OBJS_PATH)

$(OBJS_PATH)%.o : $(SRCS_PATH)%.cpp
	$(CC) $(FLAGS) -c  $< -o $@

run: all
	./test.sh

clean:
	$(RM) $(OBJS_PATH)

fclean: clean
	$(RM) $(NAME) *.replace

re: fclean all

.PHONY: all clean fclean re run
