##
## Makefile for Makefile in /home/gadrat_r/delivery/my_printf/PSU_2016_my_printf
## 
## Made by Romain Gadrat
## Login   <gadrat_r@epitech.net>
## 
## Started on  Wed Nov  9 16:33:08 2016 Romain Gadrat
## Last update Sun Nov 20 15:31:38 2016 Romain Gadrat
##

ARRC	=	ar rc

NAME	=	libmy.a

CFLAGS	=	-I ./include/

LIB	=	./src/my_printf.c	\
		./src/my_printf_addons.c	\
		./src/my_printf_addons2.c	\
		./src/my_printf_addons3.c	\
		./src/my_put_nbr_base.c	\
		./src/my_putchar.c	\
		./src/my_putstr.c	\
		./src/my_put_nbr.c	\
		./src/my_strlen.c

OBJ	=	$(LIB:.c=.o)

RM	=	rm -fr

all	:	$(NAME)

$(NAME)	:	$(OBJ)

		$(ARRC) $(NAME) $(OBJ)

clean	:

		$(RM) $(OBJ)

fclean	:	clean

		$(RM) $(NAME)

re	:	fclean all

.PHONY	:	all clean fclean re

