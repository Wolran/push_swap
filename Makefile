NAME := push_swap
CFLAGS := -Werror -Wall -Wextra
INC=/usr/include
INCLIB=$(INC)/../lib

FILES := push_swap.c \
  parsing.c \
  ft_substr.c \
  ft_split.c \
  autre.c \

OBJDIR   := objs
SRCDIR   := srcs
SRCS	 := $(addprefix $(SRCDIR)/, $(FILES))
OBJS	 := $(addprefix $(OBJDIR)/, $(FILES:.c=.o))
INCLUDES := includes

all: $(NAME) 

$(NAME): $(OBJDIR) $(OBJS)
	$(CC) -o $(NAME) $(OBJS) -L$(INCLIB)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -I$(INCLUDES) -c $< -o $@

$(OBJDIR):
	mkdir -p $@

clean:
	@${RM} ${OBJS}

fclean: clean
	@${RM} ${NAME}

re: fclean all

norm:
	norminette $(SRCS)
	norminette $(INCLUDES)

	
.PHONY: all clean fclean re
