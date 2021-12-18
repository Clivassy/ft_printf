SRCS	= ft_printf.c ft_cspdiuxX.c ft_print_hexa.c ft_print_integer.c ft_print_ptr.c ft_print_string.c ft_print_unsigned.c

OBJS	= ${SRCS:.c=.o}

CC	= gcc

NAME	= ft_printf.a

CFLAGS	= -Wall -Werror -Wextra 

RM	= rm -f

%.o : 	%.c
	@echo "\033[0;31mCompiling..."
	@${CC} -o $@ -c $< ${CFLAGS}
	
all : ${NAME}

$(NAME) : ${OBJS} ft_printf.h
	@echo "\033[0;33mLinking..."
	@ar rcs ${NAME} ${OBJS}
	@echo "\033[0;32mOK!"

clean :
	@echo "\033[0;33mCleaning..."
	@${RM} ${OBJS} ${OBJS_B}
	@echo "\033[0;32mOK CLEAN!"

fclean : clean
	${RM} ${NAME}

re : fclean all
