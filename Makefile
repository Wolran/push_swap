
NAME = push_swap

SRCS = srcs/main.c \
		srcs/operations/ft_pa_pb.c srcs/operations/ft_ra_rb_rr.c \
		srcs/operations/ft_rra_rrb_rrr.c srcs/operations/ft_sa_sb_ss.c \
		srcs/utils/ft_utils.c srcs/utils/ft_parse_atoi.c srcs/utils/ft_stacks.c \
		srcs/utils/print.c srcs/utils/ft_check_sorted.c \
		srcs/utils/find_min.c srcs/sort/minisort.c srcs/sort/fullsort.c \
		srcs/sort/utils/push_to_b.c srcs/sort/utils/push_to_a.c\
		srcs/sort/sorted_stack.c srcs/sort/utils/find_index.c\
		srcs/utils/ft_isdigit.c srcs/utils/ft_split.c\

OBJ = ${SRCS:.c=.o}

CC = gcc

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -Wall -Werror -Wextra -g3 $(OBJ) -I ./includes/ -o $(NAME)

clean:
	rm -rf $(OBJ) $(BONUS_OBJ)

fclean: clean
	rm -rf $(NAME) $(BONUS_NAME)

re: fclean all
