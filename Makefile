NAME = printf.a

CFLAGS = -Wall -Wextra -Werror

SRC = 	ft_putchar.c\
		ft_putstr.c\
		ft_putnbr.c\
		ft_putunsigned.c\
		ft_puthexa.c\
		ft_putadress.c
		
OBJ = $(SRC:.c=.o)

INCLUDES = printf.h 

all: $(NAME)

%.o : %.c $(INCLUDES)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ) 
	$(AR) rcs $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all