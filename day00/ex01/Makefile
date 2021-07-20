NAME		= 	Megaphone
HEAD		=	PhoneBook.hpp
OBJS_PATH	=	objects/
SRCS_PATH	=	./
SRCS_LIST	=	Contact.cpp PhoneBook.cpp
SRCS		=	$(addprefix $(SRCS_PATH), $(SRCS_LIST))
OBJS_LIST	=	$(patsubst %.cpp, %.o, $(SRCS_LIST))
OBJS		=	$(addprefix $(OBJS_PATH),$(OBJS_LIST))
RM			= 	rm -rf
CC			=	clang++
FLAGS		=	-Wall -Wextra -Werror

all: $(NAME) 

$(NAME): $(OBJS_PATH) $(OBJS) $(HEAD_PATH)
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

.PHONY: all clean fclean re
