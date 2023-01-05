NAME =		test.a

SUBDIRS =	printf

SRCS =		test_output.c test_character.c test_decimal.c test_hexadecimal.c

OBJS =		${SRCS:.c=.o}

GCC =		gcc

AR =		ar -rc

RM =		rm -f

${NAME}:	${OBJS} ${SUBDIRS}
			cp ../printf/libftprintf.a .
			mv libftprintf.a ${NAME}
			${AR} ${NAME} ${OBJS}
			echo "\n\033[1;35m	    ###    Testernette    ###\033[0m\n"
			${GCC} main.c test.a -o executable && ./executable && rm executable
			make fclean

${OBJS}:	${SRCS}
			${GCC} -c ${SRCS}

${SUBDIRS}:
			echo "\n\033[1;35m	    ###    Norminette    ###\033[0;33m\n"
			cd ../printf && norminette && ${MAKE} -s

all:		${NAME}

clean:
			${RM} ${OBJS}
			cd ../printf && ${MAKE} -s clean

fclean:		clean
			${RM} ${NAME}
			cd ../printf && ${MAKE} -s fclean

re:			fclean all

.PHONY:		all clean fclean re

