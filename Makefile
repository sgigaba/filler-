NAME = filler

SRC = *.c

OBJ = *.o

HEADER = filler.h

HEADERFLAGS = $(addprefix -I , $(HEADER))

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC) $(HEADER)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(OBJ) $(NAME)

re: clean all

