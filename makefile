# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/29 12:33:05 by aialonso          #+#    #+#              #
#    Updated: 2025/12/03 16:13:29 by aialonso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = push_swap

SRC_PATH = src
LIB = lib


SOURCES =   $(addprefix $(SRC_PATH)/,\
			push_swap.c\
			sort_algorit.c\
			utils/utils.c\
			sorting_ops/push.c\
			sorting_ops/swap.c\
			sorting_ops/rotate.c\
			sorting_ops/reverse_rotate.c\
			numberparse/number_parse.c\
			numberparse/normalicer_arry.c)

INC_PUS = inc
INC_LIB = $(LIB)/inc

FLA_I = -I $(INC_PUS)
FLA_I_LIB = -I $(INC_LIB)

COM_LIB = $(LIB)/libft.a

FLAGS = -Wall -Wextra -Werror -g
DFLAGS =  -L $(LIB) -lft

CC = cc

OBJECTS= $(SOURCES:.c=.o)

X ?= 10

ARGS = $(shell shuf -i 1-100000 -n $(X))


$(COM_LIB):
	make -C $(LIB)

all: $(NAME)

$(NAME): $(OBJECTS) $(COM_LIB)
	$(CC) $(FLAGS) $(FLA_I) $(FLA_I_LIB) $(OBJECTS) $(DFLAGS) -o $(NAME)
	
%.o: %.c
	@$(CC) $(FLAGS) $(FLA_I) $(FLA_I_LIB) -c $< -o $@

clean:
	make clean -C $(LIB)
	rm -f $(OBJECTS)

rclean:
	rm -f $(OBJECTS)
	
fclean: clean
	make fclean -C $(LIB)
	rm -f $(NAME)

re: fclean all rclean

test:
	./$(NAME) $(ARGS)

.PHONY: all clean rclean fclean re