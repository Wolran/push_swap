
NAME = push_swap

BONUS_NAME = checker

SRCS = srcs/main.c \
		srcs/operations/ft_pa_pb.c srcs/operations/ft_ra_rb_rr.c \
		srcs/operations/ft_rra_rrb_rrr.c srcs/operations/ft_sa_sb_ss.c \
		srcs/utils/ft_utils.c srcs/utils/ft_parse_atoi.c srcs/utils/ft_stacks.c \
		srcs/utils/print.c srcs/utils/ft_check_sorted.c \
		srcs/utils/find_min.c srcs/sort/minisort.c srcs/sort/fullsort.c \
		srcs/sort/utils/push_to_b.c srcs/sort/utils/push_to_a.c\
		srcs/sort/sorted_stack.c srcs/sort/utils/find_index.c\
		srcs/utils/ft_isdigit.c srcs/utils/ft_split.c\

BONUS_SRCS = checker/srcs/main.c \
			checker/srcs/operations/push.c checker/srcs/operations/reverse.c \
			checker/srcs/operations/rotate.c checker/srcs/operations/swap.c\
			checker/srcs/utils/utils_if.c checker/GNL/get_next_line.c\

OBJ = ${SRCS:.c=.o}

BONUS_OBJ = ${BONUS_SRCS:.c=.o}

INC = -I ./includes/ -I ./checker/includes -I ./checker/GNL

CC = gcc

all: $(NAME)

$(NAME): $(OBJ) $(BONUS_OBJ)
	$(CC) -Wall -Werror -Wextra -g3 ${INC} $(SRCS) -o ${BONUS_SRCS} -o $(NAME) $(BONUS_NAME)

clean:
	rm -rf $(OBJ) $(BONUS_OBJ)

fclean: clean
	rm -rf $(NAME) $(BONUS_NAME)

re: fclean all

.PHONY: all clean fclean re