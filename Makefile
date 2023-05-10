# 実行ファイル名
NAME	= libft.a

# コンパイル対象ファイル。 \ で改行できる。
SRCS = \
ft_isalpha.c\
ft_isdigit.c\
ft_isalnum.c\
ft_isascii.c\
ft_isprint.c\
ft_strlen.c\
ft_memset.c\
ft_bzero.c\
ft_memcpy.c\
ft_memmove.c\
ft_tolower.c\
ft_toupper.c\
ft_strlcat.c\
ft_strlcpy.c\
main.c

# 生成したいオブジェクト
OBJS	= $(SRCS:.c=.o)

# コンパイラの指定
CC		= gcc

# コンパイルオプション
CFLAG	= -Wall -Wextra -Werror

# インクルードファイルパス
INCLUDE	= -I./include


$(NAME):
	$(CC) $(CFLAG) $(SRCS) -o $(NAME)

.PHONY: all
all: ${NAME}

.PHONY: clean
clean: 
	rm -f $(OBJS)

.PHONY: fclean
fclean: clean
	rm -f ${NAME}

.PHONY: re
re: fclean all