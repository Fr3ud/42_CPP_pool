# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apavelko <apavelko@student.unit.ua>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/02 17:10:50 by apavelko          #+#    #+#              #
#    Updated: 2018/10/02 17:21:57 by apavelko         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= phonebook
SRC		= Contact.class.cpp addContact.cpp showPhonebook.cpp main.cpp
FLAGS	= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(FLAGS) $(SRC) $^ -o $(NAME)
	@printf '\033[32m[✓] %s\n\033[0m' "Phonebook"

./obj/%.o: ./src/%.cpp
	@mkdir -p obj
	clang++ $(FLAGS) -c $< -o $@
	@printf '\033[35m[✓] %s\n\033[0m' "$<"

clean:
	@/bin/rm -rf obj
	@printf '\033[31m[✓] %s\n\033[0m' "Clean"

fclean: clean
	@/bin/rm -f $(NAME)
	@printf '\033[31m[✓] %s\n\033[0m' "Fclean"

re: fclean all

.PHONY: clean fclean re all
