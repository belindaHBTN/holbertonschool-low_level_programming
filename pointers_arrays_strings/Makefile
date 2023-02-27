CC=gcc
CFLAGS=-Wall -Werror -Wextra -pedantic -std=gnu89
RM=rm -rf
BETTY=betty

SRC0=	main.c \
	0-reset_to_98.c
OBJ0=$(SRC0:.c=.o)
NAME0=0-98

SRC1=	main.c \
	1-swap.c
OBJ1=$(SRC1:.c=.o)
NAME1=1-swap

all:	0 1

0:	$(OBJ0)
	$(BETTY) $(SRC0)
	$(CC) $(CFLAGS) $(SRC0) -o $(NAME0)

1:	$(OBJ1)
	$(BETTY) $(SRC1)
	$(CC) $(CFLAGS) $(SRC1) -o $(NAME1)

0-dev:
	$(CC) $(SRC0) -o $(NAMER0

1-dev:
	$(CC) $(SRC1) -o $(NAME1)

clean:
	$(RM) *~ \#*\# \.\#* \
	$(NAME0) $(NAME1)

fclean: clean
	$(RM) $(OBJ0) $(OBJ1)

re: fclean all
