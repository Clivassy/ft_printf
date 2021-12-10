SRCS	= ft_printf.c \

OBJS	= ${SRCS:.c=.o}

OBJS_B	= ${SRCS_B:.c=.o}

CC	= gcc

NAME	= libft.a

CFLAGS	= -Wall -Werror -Wextra 

RM	= rm -f

%.o : 	%.c
	@echo "\033[0;31mCompiling..."
	@${CC} -o $@ -c $< ${CFLAGS}
	
all : ${NAME}

$(NAME) : ${OBJS} libft.h
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
