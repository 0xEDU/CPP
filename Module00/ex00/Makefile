NAME = megaphone

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS_PATH = .
OBJS_PATH = .
INCS_PATH = .

SRCS = $(addprefix $(SRCS_PATH)/, megaphone.cpp)

OBJS = $(patsubst $(SRCS_PATH)/%.cpp, $(OBJS_PATH)/%.o, $(SRCS))

all: $(NAME)

$(NAME): $(OBJS) Makefile
	@c++ $(CPPFLAGS) $(OBJS) -o $(NAME)
	@echo -e "Program compiled!"

$(OBJS): $(SRCS)
	@c++ $(CPPFLAGS) -I$(INCS_PATH) -c $(SRCS)
	@echo -e "Objects compiled!"

clean:
	@rm -rf $(OBJS)
	@echo -e "Objects removed."

fclean: clean
	@rm -rf $(NAME)
	@echo -e "Program removed."

re: fclean all

incendio: fclean
	git add .
	git commit -m "Emergency commit"
	git push

.PHONY: all clean fclean re incendio
