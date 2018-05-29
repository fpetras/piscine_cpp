# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fpetras <fpetras@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/29 10:09:38 by fpetras           #+#    #+#              #
#    Updated: 2018/05/29 14:33:27 by fpetras          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = my_awesome_phonebook

SRC = main.cpp \
	  Phonebook.class.cpp

OBJPATH = obj/
OBJ = $(addprefix $(OBJPATH),$(SRC:.cpp=.o))

CC = clang++
CFLAGS = -Wall -Werror -Wextra
CPPFLAGS = -I./

# ----- ANSI Escape Sequences ----- #
RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
BLUE = \033[1;34m
PURPLE = \033[1;35m
CYAN = \033[1;36m
WHITE = \033[1;37m
UNDERLINE = \033[0;4m
TEXT_RESET = \033[0;0m
# --------------------------------- #

all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(TEXT_RESET)"
	@echo "Generating executable file:\n$(WHITE)$@\n$(TEXT_RESET)"
	@$(CC) $(CFLAGS) $(CPPFLAGS) $(SRC) -o $(NAME)
	@echo "$(GREEN)Success$(TEXT_RESET)"

$(OBJPATH)%.o: %.cpp
	@test -d $(OBJPATH) || mkdir $(OBJPATH)
	@echo "$(CYAN)Compiling $<"
	@$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJPATH)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
