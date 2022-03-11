# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pratanac <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/10 17:41:08 by pratanac          #+#    #+#              #
#    Updated: 2022/03/10 19:20:18 by pratanac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#VARIABLE

NAME = libftprintf.a

INCLUDE = include

SRC_DIR = src/

OBJ_DIR = obj/

CC = gcc

CFLAG = -Wall -Wextra -Werror -I

#SOURCE

SRC_FILES = 	ft_atoi ft_isprint ft_printf_utils ft_strchr ft_strncmp		\
		ft_bzero ft_itoa ft_printf_utils_1 ft_strdup ft_strnstr		\
		ft_calloc ft_memchr ft_ptoa ft_striteri ft_strrchr ft_htoa	\
		ft_memcmp ft_putchar_fd ft_strjoin ft_strtrim ft_isalnum	\
		ft_memcpy ft_putendl_fd ft_strlcat ft_substr ft_isalpha		\
		ft_memmove ft_putnbr_fd ft_strlcpy ft_tolower ft_isascii	\
		ft_memset ft_putstr_fd ft_strlen ft_toupper ft_isdigit		\
		ft_printf ft_split ft_strmapi ft_utoa

SRC = $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES))) 

OBJ = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))

##

OBJF = .cache_exists

all: $(NAME)

$(NAME): $(OBJ)
	@ ar rcs $(NAME) $(OBJ)
	@ echo "libftprintf.a Created!!"

$(OBJ_DIR)%.o : $(SRC_DIR)%.c | $(OBJF)
		@ echo "Compiling : $<"
		@ $(CC) $(CFLAG) $(INCLUDE) -c $< -o $@

$(OBJF) :
	@mkdir -p $(OBJ_DIR)

clean:
	@rm -rf $(OBJ_DIR)
	@echo "Object file Clean !!"

fclean: clean
	@rm -rf $(NAME)
	@echo "Object file and lib file Clean !!"

re: fclean all
	@echo "Clean and remake file Complete!!"

