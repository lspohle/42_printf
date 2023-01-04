NAME =		testprintf.a

SUBDIRS =	intra-uuid-7c3dd5da-cb6d-4b9d-be93-cd17dbc6f636-4609906-lspohle

SRCS =		headline.c success.c failure.c character.c string.c pointer.c integer.c

OBJS =		${SRCS:.c=.o}

GCCW =		gcc

AR =		ar -rc

RM =		rm -f

${NAME}:	${OBJS} ${SUBDIRS}
			cp ../intra-uuid-7c3dd5da-cb6d-4b9d-be93-cd17dbc6f636-4609906-lspohle/libftprintf.a .
			mv libftprintf.a ${NAME}
			${AR} ${NAME} ${OBJS}

${OBJS}:	${SRCS}
			${GCCW} -c ${SRCS}

${SUBDIRS}:
			cd ../intra-uuid-7c3dd5da-cb6d-4b9d-be93-cd17dbc6f636-4609906-lspohle && ${MAKE}

all:		${NAME}

clean:
			${RM} ${OBJS}
			cd ../intra-uuid-7c3dd5da-cb6d-4b9d-be93-cd17dbc6f636-4609906-lspohle && ${MAKE} clean

fclean:		clean
			${RM} ${NAME}
			cd ../intra-uuid-7c3dd5da-cb6d-4b9d-be93-cd17dbc6f636-4609906-lspohle && ${MAKE} fclean

re:			fclean all

.PHONY:		all clean fclean re

