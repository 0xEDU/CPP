NAME = sed
TESTS = tests

PATH_SRCS = ./
PATH_TESTS = ./
PATH_OBJS = ./objects/

SRCS =	main.cpp \
		validate_file.cpp \
		str_replace.cpp \
		File.cpp

TESTS_SRCS =	tests_main.cpp \
				validate_file.cpp \
				str_replace.cpp \
				File.cpp

OBJS = ${SRCS:%.cpp=$(PATH_OBJS)%.o}
TESTS_OBJS = ${TESTS_SRCS:%.cpp=$(PATH_OBJS)%.o}

INCLUDE = -I ./
FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	@c++ $(FLAGS) $(OBJS) -o $(NAME)

$(PATH_OBJS)%.o: $(PATH_SRCS)%.cpp
	@mkdir -p $(PATH_OBJS)
	@c++ $(FLAGS) $(INCLUDE) -c $< -o $@
	@echo "\033[1;92m[SUCCESS] Object creation done!\033[0m"

tests: $(TESTS_OBJS) all
	@c++ $(FLAGS) $(TESTS_OBJS) -o $(TESTS)
	@./$(TESTS)
	@rm -rf $(TESTS)

$(PATH_OBJS)%.o: $(PATH_TESTS)%.cpp
	@mkdir -p $(PATH_OBJS)
	@c++ $(FLAGS) $(INCLUDE) -c $< -o $@
	@echo "\033[1;92m[SUCCESS] Object creation done!\033[0m"

clean:
	@rm -rf $(PATH_OBJS)
	@echo "\33[1;93m[SUCCESS] Objects removed!\33[0m"

fclean: clean
	@rm -f $(NAME) $(TESTS)
	@echo "\033[1;93m[SUCCESS] Full clean done!\33[0m"

re: fclean all
	
.PHONY: all clean fclean re
