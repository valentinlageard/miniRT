SRC			=	ft_atoi.c \
				ft_bzero.c \
				ft_calloc.c \
				ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_itoa.c \
				ft_memccpy.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memset.c \
				ft_putchar_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_putstr_fd.c \
				ft_rand.c \
				ft_randr.c \
				ft_split.c \
				ft_strchr.c \
				ft_strdup.c \
				ft_strjoin.c \
				ft_strlcat.c \
				ft_strlcpy.c \
				ft_strlen.c \
				ft_strmapi.c \
				ft_strncmp.c \
				ft_strnstr.c \
				ft_strrchr.c \
				ft_strtrim.c \
				ft_substr.c \
				ft_tolower.c \
				ft_toupper.c \
				ft_lstadd_back.c \
				ft_lstadd_front.c \
				ft_lstclear.c \
				ft_lstdelone.c \
				ft_lstiter.c \
				ft_lstlast.c \
				ft_lstnew.c \
				ft_lstsize.c \
				ft_lstmap.c \
				ft_iscinstr.c \
				ft_cdup.c \
				ft_min.c \
				ft_max.c \
				ft_utoa.c \
				ft_utoabase.c \
				ft_ultoabase.c \
				ft_abs.c \
				ft_get_next_line.c \
				ft_atof.c \
				ft_free_words.c \
				ft_rtputchar_fd.c \
				ft_rtputstr_fd.c \
				ft_printf.c \
				ft_printf/format.c \
				ft_printf/parse_format.c \
				ft_printf/parse_format_utils.c \
				ft_printf/format_char.c \
				ft_printf/format_hex.c \
				ft_printf/format_int.c \
				ft_printf/format_pointer.c \
				ft_printf/format_str.c \
				ft_printf/format_uint.c \
				ft_printf/format_percent.c \
				ft_printf/format_validity.c

OBJS		=	$(SRC:.c=.o)

CC			=	gcc $(FLAGS) -I.

FLAGS		=	-Wall -Wextra -Werror

NAME		= libft.a

all:		$(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY: 	all clean fclean re
