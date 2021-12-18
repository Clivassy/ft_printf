SRCS	= ft_printf.c ft_convert_base.c ft_count_len.c ft_csdi_cases.c ft_if_statement.c ft_print_functions.c ft_pxX_cases.c

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
