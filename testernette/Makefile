NAME =		test.a

SUBDIR =	printf

SRCS =		test_output.c test_character.c test_decimal.c test_hexadecimal.c

OBJS =		${SRCS:.c=.o}

GCCW =		gcc -Wall -Wextra

AR =		ar -rc

RM =		rm -f

${NAME}:	${OBJS} ${SUBDIR}
			cp ../printf/libftprintf.a .
			mv libftprintf.a ${NAME}
			${AR} ${NAME} ${OBJS}
			${GCCW} main.c test.a -o executable && ./executable && rm executable
			make fclean

${OBJS}:	${SRCS}
			${GCCW} -c ${SRCS}

${SUBDIR}:
			echo "\n\033[1;36mNorminette\033[0;33m\n"
			cd ../printf && norminette && ${MAKE} -s

all:		${NAME}

clean:
			${RM} ${OBJS}
			cd ../printf && ${MAKE} -s clean

fclean:		clean
			${RM} ${NAME}
			cd ../printf && ${MAKE} -s fclean

re:			fclean all

.PHONY:		all clean fclean re ${SUBDIR}

