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

SRC2=	main.c \
	2-strlen.c
OBJ2=$(SRC2:.c=.o)
NAME2=2-strlen

SRC3=	main.c \
	3-puts.c	
OBJ3=$(SRC3:.c=.o)
NAME3=3-puts

SRC4=	main.c \
	_putchar.c \
	4-print_rev.c	
OBJ4=$(SRC4:.c=.o)
NAME4=4-print_rev

SRC5=	main.c \
	_putchar.c \
	5-rev_string.c	
OBJ5=$(SRC5:.c=.o)
NAME5=5-rev_string

SRC6=	main.c \
	_putchar.c \
	6-puts2.c
OBJ6=$(SRC6:.c=.o)
NAME6=6-puts2

SRC7=	main.c \
	_putchar.c \
	7-puts_half.c
OBJ7=$(SRC7:.c=.o)
NAME7=7-puts_half

SRC8=	main.c \
	_putchar.c \
	8-print_array.c
OBJ8=$(SRC8:.c=.o)
NAME8=8-print_array.c

SRC9=	main.c \
	_putchar.c \
	7-puts_half.c
OBJ9=$(SRC9:.c=.o)
NAME9=7-puts_half

SRC10=	main.c \
	_putchar.c \
	7-puts_half.c
OBJ10=$(SRC10:.c=.o)
NAME10=7-puts_half


all:	0 1 2 3 4 5 6 7 8 9 10

0:	$(OBJ0)
	$(BETTY) $(SRC0)
	$(CC) $(CFLAGS) $(SRC0) -o $(NAME0)

1:	$(OBJ1)
	$(BETTY) $(SRC1)
	$(CC) $(CFLAGS) $(SRC1) -o $(NAME1)

2:	$(OBJ2)
	$(BETTY) $(SRC2)
	$(CC) $(CFLAGS) $(SRC2) -o $(NAME2)

3:	$(OBJ3)
	$(BETTY) $(SRC3)
	$(CC) $(CFLAGS) $(SRC3) -o $(NAME3)

4:	$(OBJ4)
	$(BETTY) $(SRC4)
	$(CC) $(CFLAGS) $(SRC4) -o $(NAME4)

5:	$(OBJ5)
	$(BETTY) $(SRC5)
	$(CC) $(CFLAGS) $(SRC5) -o $(NAME5)

6:	$(OBJ6)
	$(BETTY) $(SRC6)
	$(CC) $(CFLAGS) $(SRC6) -o $(NAME6)

7:	$(OBJ7)
	$(BETTY) $(SRC7)
	$(CC) $(CFLAGS) $(SRC7) -o $(NAME7)

8:	$(OBJ8)
	$(BETTY) $(SRC8)
	$(CC) $(CFLAGS) $(SRC8) -o $(NAME8)

9:	$(OBJ9)
	$(BETTY) $(SRC9)
	$(CC) $(CFLAGS) $(SRC9) -o $(NAME9)

10:	$(OBJ10)
	$(BETTY) $(SRC10)
	$(CC) $(CFLAGS) $(SRC10) -o $(NAME10)

0-dev:
	$(CC) $(SRC0) -o $(NAMER)

clean:
	$(RM) *~ \#*\# \.\#* \
	$(NAME0) $(NAME1) $(NAME2) $(NAME3) $(NAME4) $(NAME5) $(NAME6) $(NAME7) $(NAME8) $(NAME9) $(NAME10)

fclean: clean
	$(RM) $(OBJ0) $(OBJ1) $(OBJ2) $(OBJ3) $(OBJ4) $(OBJ5) $(OBJ6) $(OBJ7) $(OBJ8) $(OBJ9) $(OBJ10)

re: fclean all
