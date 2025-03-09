# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/04 04:53:36 by aaghzal           #+#    #+#              #
#    Updated: 2025/03/09 21:51:23 by aaghzal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = materia

CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
BUILDIR = build/
SRCS = main.cpp Character.cpp Cure.cpp MateriaSource.cpp AMateria.cpp Ice.cpp
OBJS = ${addprefix $(BUILDIR),$(SRCS:.cpp=.o)}

all: $(BUILDIR) $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $^ -o $@

$(BUILDIR)%.o: %.cpp Character.hpp Cure.hpp MateriaSource.hpp AMateria.hpp Ice.hpp ICharacter.hpp IMateriaSource.hpp
	$(CC) $(CPPFLAGS) -c $< -o $@

$(BUILDIR):
	@mkdir -p $@

clean:
	@rm -rf $(BUILDIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
