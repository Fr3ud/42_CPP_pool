NAME	= array
SRC		= main.cpp
FLAGS	= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(FLAGS) $(SRC) $^ -o $(NAME)
	@printf '\033[32m[✓] %s\n\033[0m' "Array"

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