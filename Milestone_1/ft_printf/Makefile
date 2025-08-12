# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rafaoliv <rafaoliv@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/05 12:44:43 by rafaoliv          #+#    #+#              #
#    Updated: 2025/08/12 13:52:21 by rafaoliv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

FLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

SRC = ft_printf.c ft_conversion_specifier.c ft_print_char.c ft_print_str.c ft_print_nbr.c ft_print_hexa.c ft_print_pointer.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

%.o: %.c
	@$(CC) $(FLAGS) -c $< -o $@
	@echo "$@ ✔️"

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@echo "$(NAME) criada ✔️"

all: $(NAME)

norminette:
	@norminette $(SRC) -R CheckForbiddenSourceHeader

clean:
	@rm -f $(OBJ)
	@echo "Arquivos .o limpos 🧴"
	
fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) limpa 🧽🧼"

re: fclean all

.PHONY: clean fclean re all