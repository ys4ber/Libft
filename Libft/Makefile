NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_bzero.c \
    ft_isalnum.c \
    ft_isascii.c\
    ft_isprint.c\
    ft_memchr.c\
    ft_memcpy.c\
    ft_memset.c \
    ft_strchr.c\
    ft_striteri.c\
    ft_strlcat.c\
    ft_strlen.c\
    ft_strncmp.c\
    ft_strrchr.c\
    ft_substr.c\
    ft_toupper.c\
    ft_atoi.c\
    ft_calloc.c\
    ft_isalpha.c\
    ft_isdigit.c\
    ft_itoa.c\
    ft_memcmp.c\
    ft_memmove.c\
    ft_split.c\
    ft_strdup.c\
    ft_strjoin.c\
    ft_strlcpy.c\
    ft_strmapi.c\
    ft_strnstr.c\
    ft_strtrim.c\
    ft_tolower.c\
    ft_putchar_fd.c\
    ft_putstr_fd.c\
    ft_putendl_fd.c\
    ft_putnbr_fd.c
    
SRCBONUS = ft_lstadd_back_bonus.c\
    ft_lstadd_front_bonus.c\
    ft_lstclear_bonus.c\
    ft_lstdelone_bonus.c\
    ft_lstlast_bonus.c\
    ft_lstnew_bonus.c\
    ft_lstsize_bonus.c\
    ft_lstiter_bonus.c

OBJ = $(SRC:.c=.o)
OBJBONUS = $(SRCBONUS:.c=.o)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

bonus: $(OBJBONUS)
	ar rcs $(NAME) $(OBJBONUS)

all: $(NAME)

clean:
	rm -f $(OBJ) $(OBJBONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean bonus re
