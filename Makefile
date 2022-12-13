
NAME = push_swap

BONUS_NAME = checker

MAIN_SRCS = srcs/main.c \

SRCS =	srcs/operations/ft_pa_pb.c srcs/operations/ft_ra_rb_rr.c \
		srcs/operations/ft_rra_rrb_rrr.c srcs/operations/ft_sa_sb_ss.c \
		srcs/utils/ft_utils.c srcs/utils/ft_parse_atoi.c srcs/utils/ft_stacks.c \
		srcs/utils/print.c srcs/utils/ft_check_sorted.c \
		srcs/utils/find_min.c srcs/sort/minisort.c srcs/sort/fullsort.c \
		srcs/sort/utils/push_to_b.c srcs/sort/utils/push_to_a.c \
		srcs/sort/sorted_stack.c srcs/sort/utils/find_index.c \
		srcs/utils/ft_isdigit.c srcs/utils/ft_split.c \
		srcs/utils/ft_check.c \

BONUS_SRCS = bonus_checker/srcs/main.c \
			 bonus_checker/srcs/operations/push.c \
			 bonus_checker/srcs/operations/reverse.c \
			 bonus_checker/srcs/operations/rotate.c \
			 bonus_checker/srcs/operations/swap.c \
			 bonus_checker/srcs/utils/utils_if.c \
			 bonus_checker/GNL/get_next_line.c \

OBJ = $(SRCS:.c=.o) $(MAIN_SRCS:.c=.o)

BONUS_OBJ = $(BONUS_SRCS:.c=.o)

INC = -I ./includes/ -I ./bonus_checker/includes -I ./bonus_checker/GNL 

CC = gcc

all: $(NAME)

bonus: $(BONUS_NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) -Wall -Werror -Wextra -I ./includes/ $(MAIN_SRCS) $(SRCS)
	
$(BONUS_NAME): $(BONUS_OBJ)
	$(CC) -o $(BONUS_NAME) -Wall -Werror -Wextra $(INC) $(BONUS_SRCS) $(SRCS)

clean:
	rm -rf $(OBJ) $(BONUS_OBJ)

fclean: clean
	rm -rf $(NAME) $(BONUS_NAME)

re: fclean all bonus

.PHONY: all bonus clean fclean re
