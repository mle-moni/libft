SRCS    = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c ft_isascii.c ft_memcmp.c ft_putnbr_fd.c ft_strlcat.c ft_strrchr.c ft_atoi.c ft_isdigit.c ft_memcpy.c ft_putstr_fd.c ft_strlcpy.c ft_strtrim.c ft_bzero.c ft_isprint.c ft_memmove.c ft_split.c ft_strlen.c ft_substr.c ft_calloc.c ft_itoa.c ft_memset.c ft_strchr.c ft_strmapi.c ft_tolower.c ft_isalnum.c ft_memccpy.c ft_putchar_fd.c ft_strdup.c ft_strncmp.c ft_toupper.c ft_isalpha.c ft_memchr.c ft_putendl_fd.c ft_strjoin.c ft_strnstr.c
OBJS    = ${SRCS:.c=.o}
NAME    = libft.a
B_NAME	= libft.a_bonus
RM      = rm -f
CC      = gcc
CFLAGS  = -Wall -Wextra -Werror
.c.o:
			${CC} ${CFLAGS} -I. -c $< -o ${<:.c=.o}
${NAME}:    ${OBJS}
			ar rc ${NAME} ${OBJS}
			ranlib ${NAME}
bonus:		${OBJS}
			ar rc ${B_NAME} ${OBJS}
			ranlib ${B_NAME}
all:        ${NAME}
clean:
			${RM} ${OBJS}
fclean:     clean
			${RM} ${NAME}
			${RM} ${B_NAME}
re:         fclean all
.PHONY:     all clean fclean re