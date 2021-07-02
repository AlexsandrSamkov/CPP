NAME =  Megaphone
OBJS_PATH		=	objects/
SRCS_PATH		=	source/
SRCS_LIST	=	megaphone.cpp
SRCS		=	$(addprefix $(SRCS_PATH), $(SRCS_LIST))
OBJS_LIST	=	$(patsubst %.cpp, %.o, $(SRCS_LIST))
OBJS		=	$(addprefix $(OBJS_PATH),$(OBJS_LIST))
RM			= 	rm -rf
CC			=	clang++
CFLAGS		=	-Wall -Wextra -Werror
OFLAGS		=	 -Wall -Wextra -Werror  -c 
all: $(NAME) 
$(NAME): $(OBJS_PATH) $(OBJS) 
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJS_PATH):
	mkdir -p $(OBJS_PATH)

$(OBJS_PATH)%.o : $(SRCS_PATH)%.c
	$(CC) $(OFLAGS) $< -o $@

clean:
	$(RM) $(OBJS_PATH)

fclean: clean
	$(RM) $(NAME)

re: fclean all
