# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/24 16:52:33 by hcherpre          #+#    #+#              #
#    Updated: 2022/11/24 17:17:51 by hcherpre         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	Iter

SRCS =	main.cpp

CC = c++

OBJS_PATH = objects/
OBJS = ${addprefix ${OBJS_PATH}, ${SRCS:.cpp=.o}}

CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98

${OBJS_PATH}%.o: ${SRCS_PATH}%.cpp
	@mkdir -p $(dir $@)
	${CC} ${CFLAGS} -c $< -o $@ ${INCLUDES}

all:        $(NAME)

$(NAME):    $(OBJS)
	${CC} ${CFLAGS} $(OBJS) -o $(NAME)

clean:
	${RM} ${OBJS}

fclean:			clean
	${RM} ${NAME}

re:				fclean all

.PHONY:			all clean fclean re% 