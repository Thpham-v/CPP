# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thpham-v <thpham-v@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/07 02:28:11 by thpham-v          #+#    #+#              #
#    Updated: 2022/05/07 06:16:24 by thpham-v         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	phonebook
SRCS			=	main.cpp			\
					Phonebook.cpp		\
					Contact.cpp
CC				=	@c++
FLAGS			=	-Wall -Wextra -Werror -std=c++98
OBJDIR			=	objs
OBJS			=	$(addprefix $(OBJDIR)/, $(SRCS:.cpp=.o))

all				:	$(NAME)

$(NAME)			:	$(OBJS)
				$(CC) $(FLAGS) $(OBJS) -o $(NAME)
				@echo "\033[1;30m[$(NAME)] \033[1;32mcreated !\033[0m"

${OBJDIR}/%.o	:	%.cpp
				@mkdir -p $(OBJDIR)
				$(CC) $(FLAGS) -c $< -o $@

clean			:
				@rm -rf $(OBJDIR)
				@echo "\033[1;30m[$(OBJDIR)] : \033[1;31mdeleted !\033[0m"

fclean			:	clean
				@rm -f $(NAME)
				@echo "\033[1;30m[$(NAME)] \033[1;31mdeleted !\033[0m"

re				:	fclean all

.PHONY			: 	clean fclean all re