
NAME = accountTest

CC = g++
CFLAGS = -std=c++98 -Wall -Wextra -Werror  

RM = rm
RMFLAGS = -rf

SRCS_DIR = ./
SRCS = Account.cpp		\
	   tests.cpp

OBJS_DIR = ./objs
OBJS = $(addprefix $(OBJS_DIR)/, $(notdir $(SRCS:.cpp=.o)))



all : $(NAME)

clean :
	@$(RM) $(RMFLAGS) $(OBJS_DIR)

fclean : clean
	@$(RM) $(RMFLAGS) $(NAME)

re : fclean all


$(OBJS_DIR) :
	@mkdir $(OBJS_DIR)

$(OBJS_DIR)/%.o : $(SRCS_DIR)/%.cpp | $(OBJS_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $@


.PHONY: all clean fclean re 
