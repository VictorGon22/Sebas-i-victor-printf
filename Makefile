##
## EPITECH PROJECT, 2021
## d10
## File description:
## 

SRC		=	 sources/

SRC_C	=	sum_numbers.c		\
			disp_stdarg.c		\
			sum_strings_length.c\
			my_put_nbr.c		\
			my_putchar.c		\
			my_putstr.c

SRCS_C	= 	$(addprefix $(SRC), $(SRC_C))
OBJ	= 	$(SRCS_C:.c=.o)

NAME	=	libmy.a

$(NAME):	$(OBJ)
			ar rc $(NAME) $(OBJ)

all:	$(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

##unit_tests:

##run_tests: