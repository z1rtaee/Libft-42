NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -g
SRCS = ft_isalpha.c ft_isalnum.c ft_isdigit.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_strlcat.c ft_strlcpy.c ft_strncmp.c ft_atoi.c ft_toupper.c \
	ft_tolower.c ft_strnstr.c ft_memset.c ft_bzero.c ft_memcpy.c ft_strchr.c \
	ft_memmove.c ft_strrchr.c ft_memchr.c ft_memcmp.c ft_strdup.c ft_calloc.c \
	ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_strmapi.c ft_striteri.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c
BSRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
	ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJS = $(SRCS:.c=.o)
BOB = $(BSRCS:.c=.o)
EXEC = libft
%.o: %.c
	$(CC) $(CFLAGS) -I. -c $(<) -o $(@)

all: $(NAME)

$(NAME): $(OBJS)
	@ar -rcs $(NAME) $(OBJS)

bonus: .bonus 

.bonus: $(BOB)
	@ar -rcs $(NAME) $(BOB)
	@touch .bonus

clean:
	@rm -f $(OBJS) $(BOB)
	@rm -f .bonus

fclean: clean
	@rm -f $(NAME)

re: fclean all

comp: fclean bonus
	$(CC) $(CFLAGS) main.c $(NAME) -lbsd -o $(EXEC)

run: comp
	@./$(EXEC)
	@make fclean --no-print-directory
	@rm -f $(EXEC)

.PHONY: all clean fclean re comp run bonus