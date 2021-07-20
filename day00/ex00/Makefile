NAME		=	Megaphone
HEAD		=	header.hpp
OBJS_PATH	=	objects/
SRCS_PATH	=	./
SRCS_LIST	=	megaphone.cpp
SRCS		=	$(addprefix $(SRCS_PATH), $(SRCS_LIST))
OBJS_LIST	=	$(patsubst %.cpp, %.o, $(SRCS_LIST))
OBJS		=	$(addprefix $(OBJS_PATH),$(OBJS_LIST))
RM			=	rm -rf
CC			=	clang++
FLAGS		=	-Wall -Wextra -Werror
all: $(NAME) 
$(NAME): $(OBJS_PATH) $(OBJS)
	$(CC) $(FLAGS) -I $(HEAD) $(OBJS) -o $(NAME)

$(OBJS_PATH):
	mkdir -p $(OBJS_PATH)

$(OBJS_PATH)%.o : $(SRCS_PATH)%.cpp $(HEAD)
	$(CC) $(FLAGS) -c  $< -o $@
clean:
	$(RM) $(OBJS_PATH)

fclean: clean
	$(RM) $(NAME)

re: fclean all
