# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yajallal <yajallal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/01 22:33:19 by yajallal          #+#    #+#              #
#    Updated: 2022/10/17 00:02:03 by yajallal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: clean all re fclean
CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRC = *.c

OBJ = $(SRC:.c=.o)

all: $(NAME)
	@echo "all done"

$(NAME):
	@CC $(CFLAGS) -c $(SRC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@rm -f $(OBJ)
	@echo "OBJ deleted"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) deleted"

re: fclean all
# .PHONY: clean all re fclean
# NAME = libft.a
# CFLAGS = -Wall -Wextra -Werror
# SRCS = 
# OBJS = $(SRCS:.c=.o)
# SRCBS = ft_lstnew.c ft_lstadd_front.c ft_lstadd_back.c ft_lstsize.c ft_lstlast.c\
# ft_lstdelone.c ft_lstclear.c	ft_lstiter.c
# OBBS = ft_lstnew.o ft_lstadd_front.o ft_lstadd_back.o ft_lstsize.o ft_lstlast.o ft_lstadd_back.o ft_lstdelone.o\
# ft_lstclear.o ft_lstiter.o
# all:$(NAME)
# $(NAME):
# 	gcc $(CFLAGS) -c $(SRCS)
# 	ar rc $(NAME) $(OBJS)
# 	ranlib $(NAME)
# bonus:
# 	gcc $(CFLAGS) -c $(SRCBS)
# 	ar rc $(NAME) $(OBBS)
# 	ranlib $(NAME)
# clean:
# 	rm -f $(OBJS)
# 	rm -f $(OBBS)
# fclean: clean
# 	rm -f $(NAME)
# re: fclean all

# CC=GCC
# FLAGS= -Wall -Werror -Wextra -I libft.h
# AR=ar crs
# RM=rm -rf
# FILES= ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_strlen \
# 	   ft_toupper ft_tolower ft_strchr ft_strrchr ft_strncmp \
# 	   ft_strnstr ft_strlcpy ft_strlcat ft_atoi ft_strdup \
# 	   ft_substr ft_strjoin ft_split ft_itoa ft_strmapi \
# 	   ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_isprint \
# 	   ft_putnbr_fd ft_strtrim ft_memcpy ft_memmove ft_memset \
# 	   ft_memcmp ft_memchr ft_bzero ft_calloc ft_striteri
# BFILES  = ft_lstnew ft_lstadd_front \
# 	   ft_striteri ft_lstsize ft_lstlast ft_lstadd_back ft_lstdelone \
# 	   ft_lstclear ft_lstiter
# OBJ=$(FILES:=.o)
# BOBJ=$(BFILES:=.o)
# NAME=libft.a

# RED = \033[1;31m
# GREEN = \033[1;32m
# YELLOW = \033[1;33m
# BLUE = \033[1;34m
# RESET = \033[0m

# .PHONY: all bonus clean fclean re

# all: $(NAME)
# 	@echo "$(RED)------safi done------$(RESET)"


# bonus: all $(BOBJ)
# 	echo "hani kan commpili $(GREEN)" $< "$(RESET)akhay sat"
# 	@$(AR) $(NAME) $(BOBJ)

# $(NAME): $(OBJ)
# 	@$(AR) $(NAME) $(OBJ)

# %.o: %.c libft.h
# 	@echo "hani kan commpili$(GREEN)" $< "$(RESET)akhay sat"
# 	@$(CC) $(FLAGS) -c $< -o $@

# clean:
# 	@echo "$(YELLOW)Cleaned$(RESET)"
# 	@$(RM) $(OBJ) $(BOBJ)

# fclean: clean
# 	@$(RM) $(NAME)

# re: fclean all
