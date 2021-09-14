NAME = group

SRC = *.cpp

all: $(NAME)

$(NAME) : $(SRC)
	clang++ --std=c++17 $(SRC) -o $(NAME)
clean:
	rm -rf $(NAME)
fclean: clean


re: fclean all
