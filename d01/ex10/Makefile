NAME = cato9tails

SRCS =	main.cpp
OBJS = $(SRCS:.cpp=.o)

CXX = clang++
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(FLAGS) $(OBJS) -o $@
	@printf '\033[32m[✓] %s\n\033[0m' "cato9tails"

%.o: %.cpp
	$(CXX) $(FLAGS) -c $< -o $@
	@printf '\033[35m[✓] %s\n\033[0m' "$<"

clean:
	@/bin/rm -rf $(OBJS)
	@printf '\033[31m[✓] %s\n\033[0m' "Clean"

fclean: clean
	@/bin/rm -f $(NAME)
	@printf '\033[31m[✓] %s\n\033[0m' "Fclean"
re: fclean all

.PHONY: all clean fclean all
